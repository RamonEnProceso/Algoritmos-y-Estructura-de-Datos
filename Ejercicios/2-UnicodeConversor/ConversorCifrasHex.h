#ifndef CONVERSOR_CIFRAS_HEX_H
#define CONVERSOR_CIFRAS_HEX_H

int conversorCifraHexDecimal (char hexN){
    switch (hexN)
    {
    case 'A': return 10; break;
    case 'B': return 11; break;
    case 'C': return 12; break;
    case 'D': return 13; break;
    case 'E': return 14; break;
    case 'F': return 15; break;

    default:
        return hexN - '0';
        break;
    }
}


char conversorCifraDecimalHex (char dec){
    switch (dec)
    {
    case 10: return 'A'; break;
    case 11: return 'B'; break;
    case 12: return 'C'; break;
    case 13: return 'D'; break;
    case 14: return 'E'; break;
    case 15: return 'F'; break;

    default:
        return dec + '0';
        break;
    }
}

#endif