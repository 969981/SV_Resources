/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00893a20; name: FUN_00893a20
 */


undefined8 FUN_00893a20(char *param_1,char *param_2)

{
  char cVar1;
  undefined8 uVar2;
  char *local_30;
  char *pcStack_28;
  
  FUN_0089344c(&pcStack_28,&local_30);
  cVar1 = *param_1;
  if ((((*pcStack_28 == cVar1) && (pcStack_28[1] == param_1[1])) && (pcStack_28[2] == param_1[2]))
     && (((pcStack_28[3] == param_1[3] && (*local_30 == *param_2)) &&
         ((local_30[1] == param_2[1] && ((local_30[2] == param_2[2] && (local_30[3] == param_2[3])))
          ))))) {
    uVar2 = 0;
  }
  else if (((pcStack_28[4] == cVar1) &&
           ((((pcStack_28[5] == param_1[1] && (pcStack_28[6] == param_1[2])) &&
             (pcStack_28[7] == param_1[3])) &&
            ((local_30[4] == *param_2 && (local_30[5] == param_2[1])))))) &&
          ((local_30[6] == param_2[2] && (local_30[7] == param_2[3])))) {
    uVar2 = 1;
  }
  else if ((((pcStack_28[8] == cVar1) && (pcStack_28[9] == param_1[1])) &&
           (pcStack_28[10] == param_1[2])) &&
          ((((pcStack_28[0xb] == param_1[3] && (local_30[8] == *param_2)) &&
            (local_30[9] == param_2[1])) &&
           ((local_30[10] == param_2[2] && (local_30[0xb] == param_2[3])))))) {
    uVar2 = 2;
  }
  else if ((((pcStack_28[0xc] == cVar1) &&
            ((pcStack_28[0xd] == param_1[1] && (pcStack_28[0xe] == param_1[2])))) &&
           (pcStack_28[0xf] == param_1[3])) &&
          ((((local_30[0xc] == *param_2 && (local_30[0xd] == param_2[1])) &&
            (local_30[0xe] == param_2[2])) && (local_30[0xf] == param_2[3])))) {
    uVar2 = 3;
  }
  else if ((((pcStack_28[0x10] == cVar1) && (pcStack_28[0x11] == param_1[1])) &&
           ((pcStack_28[0x12] == param_1[2] &&
            ((pcStack_28[0x13] == param_1[3] && (local_30[0x10] == *param_2)))))) &&
          ((local_30[0x11] == param_2[1] &&
           ((local_30[0x12] == param_2[2] && (local_30[0x13] == param_2[3])))))) {
    uVar2 = 4;
  }
  else if ((((pcStack_28[0x14] == cVar1) &&
            ((((pcStack_28[0x15] == param_1[1] && (pcStack_28[0x16] == param_1[2])) &&
              (pcStack_28[0x17] == param_1[3])) &&
             ((local_30[0x14] == *param_2 && (local_30[0x15] == param_2[1])))))) &&
           (local_30[0x16] == param_2[2])) && (local_30[0x17] == param_2[3])) {
    uVar2 = 5;
  }
  else {
    uVar2 = 7;
  }
  return uVar2;
}


