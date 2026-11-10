/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007d6714; name: FUN_007d6714
 */


undefined8 FUN_007d6714(long *param_1,long param_2,short param_3)

{
  if (((((((*param_1 == param_2) && ((short)param_1[0x18] == param_3)) ||
         ((param_1[1] == param_2 && (*(short *)((long)param_1 + 0xc2) == param_3)))) ||
        ((param_1[2] == param_2 && (*(short *)((long)param_1 + 0xc4) == param_3)))) ||
       (((param_1[3] == param_2 && (*(short *)((long)param_1 + 0xc6) == param_3)) ||
        ((((param_1[4] == param_2 && ((short)param_1[0x19] == param_3)) ||
          ((param_1[5] == param_2 && (*(short *)((long)param_1 + 0xca) == param_3)))) ||
         ((param_1[6] == param_2 && (*(short *)((long)param_1 + 0xcc) == param_3)))))))) ||
      ((((((param_1[7] == param_2 && (*(short *)((long)param_1 + 0xce) == param_3)) ||
          (((param_1[8] == param_2 && ((short)param_1[0x1a] == param_3)) ||
           ((param_1[9] == param_2 && (*(short *)((long)param_1 + 0xd2) == param_3)))))) ||
         ((((param_1[10] == param_2 && (*(short *)((long)param_1 + 0xd4) == param_3)) ||
           ((param_1[0xb] == param_2 && (*(short *)((long)param_1 + 0xd6) == param_3)))) ||
          ((((param_1[0xc] == param_2 && ((short)param_1[0x1b] == param_3)) ||
            ((param_1[0xd] == param_2 && (*(short *)((long)param_1 + 0xda) == param_3)))) ||
           ((param_1[0xe] == param_2 && (*(short *)((long)param_1 + 0xdc) == param_3)))))))) ||
        ((param_1[0xf] == param_2 && (*(short *)((long)param_1 + 0xde) == param_3)))) ||
       ((((param_1[0x10] == param_2 && ((short)param_1[0x1c] == param_3)) ||
         ((param_1[0x11] == param_2 && (*(short *)((long)param_1 + 0xe2) == param_3)))) ||
        (((param_1[0x12] == param_2 && (*(short *)((long)param_1 + 0xe4) == param_3)) ||
         ((param_1[0x13] == param_2 && (*(short *)((long)param_1 + 0xe6) == param_3)))))))))) ||
     (((((param_1[0x14] == param_2 && ((short)param_1[0x1d] == param_3)) ||
        ((param_1[0x15] == param_2 && (*(short *)((long)param_1 + 0xea) == param_3)))) ||
       ((param_1[0x16] == param_2 && (*(short *)((long)param_1 + 0xec) == param_3)))) ||
      ((param_1[0x17] == param_2 && (*(short *)((long)param_1 + 0xee) == param_3)))))) {
    return 1;
  }
  return 0;
}


