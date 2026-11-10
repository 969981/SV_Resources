/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034a3174; name: FUN_034a3174
 */


void FUN_034a3174(long *param_1,int *param_2)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  long *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  *(int *)((long)param_1 + 0x2d4) = *(int *)((long)param_1 + 0x2d4) + 1;
  if (*param_2 != 0) {
    iVar3 = *param_2;
    iStack_3c = param_2[1];
    lVar2 = param_1[0x47];
    if (lVar2 == 0) {
      local_48 = *(undefined4 *)((long)param_1 + 0x26c);
      local_58 = param_1 + 2;
      local_50 = 0x4000000;
      local_38 = 0x1a;
      local_44 = 0;
      local_34 = 0x100;
      local_32 = 0;
      local_40 = iVar3;
      lVar2 = FUN_034e6ab0(*(undefined8 *)PTR_DAT_047e7038,&local_58,0);
      param_1[0x47] = lVar2;
      (**(code **)(*param_1 + 0xb0))(param_1,0xe,iVar3);
      if (lVar2 == 0) {
        (**(code **)(*param_1 + 0x28))(local_44,param_1,local_50,1);
      }
      return;
    }
    uVar1 = *(undefined8 *)PTR_DAT_047e7038;
LAB_034a31f8:
    FUN_034e6c0c(0,uVar1,lVar2,0x4000000,iVar3,iStack_3c,0);
    return;
  }
  if ((*(byte *)((long)param_1 + 0x2ba) & 0x78) == 0) {
    lVar2 = *param_1;
    uVar1 = 0;
  }
  else {
    lVar2 = param_1[0x47];
    if (lVar2 != 0) {
      uVar1 = *(undefined8 *)PTR_DAT_047e7038;
      iVar3 = 0;
      iStack_3c = 4;
      goto LAB_034a31f8;
    }
    lVar2 = *param_1;
    uVar1 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x034a32d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0xa0))(param_1,uVar1);
  return;
}


