/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005112f4; name: FUN_005112f4
 */


undefined8 FUN_005112f4(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  byte *pbVar4;
  undefined8 uVar5;
  byte local_38;
  undefined7 uStack_37;
  undefined8 local_28;
  
  if ((int)param_1[5] != 3) {
    FUN_004a8ec0(&local_38,"Expected integer, got: ",param_1 + 6);
    plVar2 = (long *)*param_1;
    *(undefined1 *)(param_1 + 0x1e) = 1;
    if (plVar2 != (long *)0x0) {
                    /* try { // try from 00511388 to 0051138f has its CatchHandler @ 00511498 */
      (**(code **)(*plVar2 + 0x10))
                (plVar2,(int)param_1[9],*(undefined4 *)((long)param_1 + 0x4c),&local_38);
    }
    goto LAB_00511390;
  }
  pbVar4 = (byte *)(param_1 + 6);
  if ((*pbVar4 & 1) == 0) {
    if ((*pbVar4 < 4) || (*(char *)((long)param_1 + 0x31) != '0')) goto LAB_00511448;
    if ((*(byte *)((long)param_1 + 0x32) | 0x20) != 0x78) {
      bVar1 = *(byte *)((long)param_1 + 0x32);
joined_r0x00511400:
      if ((bVar1 < 0x30) || (0x37 < bVar1)) {
LAB_00511448:
        uVar3 = FUN_004fd258(pbVar4,param_3,&local_38);
        if ((uVar3 & 1) == 0) {
          uVar5 = FUN_004fd330(pbVar4);
        }
        else {
          uVar5 = NEON_ucvtf(CONCAT71(uStack_37,local_38));
        }
        *param_2 = uVar5;
        FUN_004fcda0(param_1 + 5);
        return 1;
      }
    }
  }
  else {
    if ((ulong)param_1[7] < 2) goto LAB_00511448;
    if ((*(char *)param_1[8] != '0') || ((byte)(((char *)param_1[8])[1] | 0x20U) != 0x78)) {
      if (*(char *)param_1[8] != '0') goto LAB_00511448;
      bVar1 = ((char *)param_1[8])[1];
      goto joined_r0x00511400;
    }
  }
  FUN_004a8ec0(&local_38,"Expect a decimal number, got: ",pbVar4);
  plVar2 = (long *)*param_1;
  *(undefined1 *)(param_1 + 0x1e) = 1;
  if (plVar2 != (long *)0x0) {
                    /* try { // try from 0051143c to 00511443 has its CatchHandler @ 00511494 */
    (**(code **)(*plVar2 + 0x10))
              (plVar2,(int)param_1[9],*(undefined4 *)((long)param_1 + 0x4c),&local_38);
  }
LAB_00511390:
  if ((local_38 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_28);
  }
  return 0;
}


