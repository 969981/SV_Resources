/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0291ae3c; name: FUN_0291ae3c
 */


void FUN_0291ae3c(long param_1,long param_2)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  ulong uVar9;
  long local_80;
  long *local_78;
  long *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  uStack_60 = *(undefined8 *)(param_1 + 8);
  local_78 = (long *)0x0;
  local_70 = (long *)0x0;
  local_48 = 0;
  local_68 = 0;
  local_58 = 0x1fffffffffffffff;
  uStack_50 = 0;
  if (*(char *)(param_2 + 0x60) != '\0') {
    uVar9 = 0;
    iVar3 = -0x80000000;
    lVar6 = param_2;
    do {
      if (*(char *)(lVar6 + 0xc) != '\0') {
        iVar1 = *(int *)(lVar6 + 8);
        if (iVar3 < iVar1) {
          local_70 = local_78;
          local_80 = lVar6;
          FUN_0291b02c(&local_78,&local_80);
          iVar3 = iVar1;
        }
        else if (iVar3 == iVar1) {
          local_80 = lVar6;
          FUN_0291b02c(&local_78,&local_80);
        }
      }
      uVar9 = uVar9 + 1;
      lVar6 = lVar6 + 0x10;
    } while (uVar9 < *(byte *)(param_2 + 0x60));
  }
  lVar6 = (long)local_70 - (long)local_78 >> 3;
  if (lVar6 == 0) {
    uVar2 = 0;
    *(undefined8 *)(param_1 + 0x2c) = 0x8000000000000001;
    uVar8 = 0xffffffff;
  }
  else {
    plVar7 = local_78;
    if (lVar6 != 1) {
      iVar3 = FUN_012440f0(*(undefined8 *)(param_1 + 0x58));
      if ((ulong)((long)local_70 - (long)local_78 >> 3) <= (ulong)(long)iVar3) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      plVar7 = local_78 + iVar3;
    }
    lVar6 = *plVar7;
    uVar5 = FUN_00f7e27c(*(undefined8 *)(param_1 + 0x48));
    uVar4 = (**(code **)(**(long **)(param_1 + 0x60) + 0x98))();
    uVar4 = FUN_010e161c(uVar5,uVar4);
    uVar8 = (uint)*(byte *)(lVar6 + 4);
    uVar2 = FUN_02102a34(uVar5,uVar4);
    *(ulong *)(param_1 + 0x2c) = (ulong)*(uint *)(lVar6 + 8) << 0x20;
  }
  *(undefined1 *)(param_1 + 0x6c) = uVar2;
  *(uint *)(param_1 + 0x68) = uVar8;
  FUN_0291b080(&local_78);
  return;
}


