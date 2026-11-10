/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00819b20; name: FUN_00819b20
 */


undefined8 FUN_00819b20(long param_1,long param_2,int param_3,byte *param_4)

{
  int iVar1;
  byte *pbVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  byte *pbVar6;
  
  if ((*param_4 & 1) == 0) {
    param_4[0] = 0;
    param_4[1] = 0;
    iVar1 = 0;
    if (param_3 != 0) {
      iVar1 = 0x100 / param_3;
    }
  }
  else {
    **(undefined1 **)(param_4 + 0x10) = 0;
    param_4[8] = 0;
    param_4[9] = 0;
    param_4[10] = 0;
    param_4[0xb] = 0;
    param_4[0xc] = 0;
    param_4[0xd] = 0;
    param_4[0xe] = 0;
    param_4[0xf] = 0;
    iVar1 = 0;
    if (param_3 != 0) {
      iVar1 = 0x100 / param_3;
    }
  }
  if (iVar1 * param_3 != 0x100) {
    return 0;
  }
  pbVar2 = (byte *)FUN_0049e7b0(PTR_FUN_047cba38,param_1);
  if (((DAT_047fb930 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_047fb930), iVar1 != 0)) {
    plVar4 = (long *)FUN_0049e770(PTR_FUN_047cba38,8);
    if (plVar4 != (long *)0x0) {
      *plVar4 = (long)(PTR_DAT_047d1918 + 0x10);
    }
    DAT_047fb928 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,8);
    if (DAT_047fb928 != (undefined8 *)0x0) {
      *DAT_047fb928 = plVar4;
    }
    __cxa_guard_release(&DAT_047fb930);
  }
                    /* try { // try from 00819bb8 to 00819bd3 has its CatchHandler @ 00819cb4 */
  uVar3 = (**(code **)(*(long *)*DAT_047fb928 + 0x18))((long *)*DAT_047fb928,pbVar2,param_1);
  if ((uVar3 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    FUN_002cdbb0(param_4,param_1);
    if (param_1 != 0) {
      pbVar6 = pbVar2;
      do {
        iVar1 = 0;
        if (param_3 != 0) {
          iVar1 = (int)(uint)*pbVar6 / param_3;
        }
                    /* try { // try from 00819bec to 00819bf3 has its CatchHandler @ 00819cc0 */
        FUN_002cdcec(param_4,*(undefined1 *)(param_2 + (ulong)((uint)*pbVar6 - iVar1 * param_3)));
        param_1 = param_1 + -1;
        pbVar6 = pbVar6 + 1;
      } while (param_1 != 0);
      uVar5 = 1;
      goto LAB_00819c10;
    }
    uVar5 = 1;
  }
  if (pbVar2 == (byte *)0x0) {
    return uVar5;
  }
LAB_00819c10:
  FUN_0049e800(pbVar2);
  FUN_0049e7e0(PTR_LAB_047cba48,pbVar2);
  return uVar5;
}


