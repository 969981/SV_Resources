/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011e7be0; name: FUN_011e7be0
 */


void FUN_011e7be0(long param_1,long param_2,undefined4 param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long *local_88;
  long local_80;
  long lStack_78;
  long local_70;
  long *local_68;
  
  lVar6 = *(long *)(param_2 + 8);
  lVar2 = *(long *)(lVar6 + 0x218) - *(long *)(lVar6 + 0x210);
  if (lVar2 != 0) {
    uVar8 = 1;
    while( true ) {
      lVar6 = *(long *)(lVar6 + 0x210);
      lVar7 = *(long *)(param_1 + 0x30);
      FUN_011e79d8(&local_88,param_1,lVar6 + (long)(int)(uVar8 - 1) * 400,param_3);
      plVar3 = local_88;
      plVar1 = (long *)PTR_DAT_047d8b70;
      if (local_88 != (long *)0x0) {
        plVar1 = local_88 + 6;
      }
      local_80 = *plVar1;
      plVar1 = (long *)PTR_PTR_047d4508;
      if (local_88 != (long *)0x0) {
        plVar1 = local_88 + 7;
      }
      lStack_78 = *plVar1;
      if (local_88 == (long *)0x0) {
        local_70 = 0;
      }
      else {
        local_70 = local_88[8];
        local_68 = (long *)0x0;
        (**(code **)(*local_88 + 0x18))(local_88);
      }
      local_68 = plVar3;
      uVar5 = FUN_00d4e220(lVar7,&local_80,0);
      lVar6 = lVar6 + (long)(int)(uVar8 - 1) * 400;
      if ((uVar5 & 0xff) == 0) {
        FUN_011e86a0(lVar7,&local_80,lVar6 + 0x20,0);
      }
      else {
        iVar4 = strcmp(*(char **)(lVar6 + 0x28),"IrradianceVolume");
        if (iVar4 != 0) {
          lVar6 = *(long *)(lVar7 + 0x38) + ((long)uVar5 >> 0x20) * 0x1d0;
          *(int *)(lVar6 + 0x1c0) = *(int *)(lVar6 + 0x1c0) + 1;
        }
      }
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      if (local_88 != (long *)0x0) {
        (**(code **)(*local_88 + 0x20))();
      }
      if ((ulong)((lVar2 >> 4) * -0x70a3d70a3d70a3d7) <= (ulong)uVar8) break;
      lVar6 = *(long *)(param_2 + 8);
      uVar8 = uVar8 + 1;
    }
  }
  return;
}


