/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0351d8a4; name: FUN_0351d8a4
 */


void FUN_0351d8a4(long param_1,ulong param_2,int param_3,uint param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  int local_94;
  int local_90;
  int local_8c;
  undefined1 auStack_88 [40];
  
  if (param_4 == 0) {
    return;
  }
  FUN_0351d424(param_1,param_2,auStack_88);
  puVar4 = PTR_DAT_047e6f38;
  iVar6 = (int)param_2;
  if ((param_4 >> 0xd & 1) != 0) {
    lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0x78);
    lVar5 = *(long *)(lVar7 + 0x130);
    uVar8 = *(int *)(lVar5 + 4) + iVar6;
    uVar1 = uVar8 + param_3;
    if ((int)uVar8 < 0) {
      if ((int)uVar1 < 1) goto LAB_0351d974;
      uVar8 = 0;
    }
    iVar2 = *(int *)(lVar7 + 0x138);
    if (iVar2 != 2) {
      uVar9 = 2;
      do {
        uVar3 = *(uint *)(lVar5 + (ulong)(uVar9 - 1) * 0x10 + 4);
        if (uVar8 <= uVar3) {
          if (uVar1 <= uVar3) break;
          FUN_034b3de8(*(undefined8 *)puVar4,param_5,auStack_88,
                       *(undefined8 *)(lVar5 + (ulong)(uVar9 - 1) * 0x10 + 8));
        }
        if (iVar2 - 2U < uVar9) break;
        lVar5 = *(long *)(lVar7 + 0x130);
        uVar9 = uVar9 + 1;
      } while( true );
    }
  }
LAB_0351d974:
  if (((0 < param_3 + iVar6) && (iVar6 < 1)) && ((param_4 >> 10 & 1) != 0)) {
    FUN_034b3ce0(*(undefined8 *)PTR_DAT_047e6f38,param_5,0x400,auStack_88);
  }
  FUN_035248d4(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x78),param_2 & 0xffffffff,param_3,
               &local_8c,&local_90,&local_94);
  puVar4 = PTR_DAT_047e6f38;
  if ((param_4 >> 9 & 1) != 0) {
    for (; local_8c != 0; local_8c = local_8c + -1) {
      FUN_034b3ce0(*(undefined8 *)puVar4,param_5,0x200,auStack_88);
    }
  }
  puVar4 = PTR_DAT_047e6f38;
  iVar2 = local_90;
  if ((param_4 >> 8 & 1) != 0) {
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      FUN_034b3ce0(*(undefined8 *)puVar4,param_5,0x100,auStack_88);
    }
  }
  puVar4 = PTR_DAT_047e6f38;
  iVar2 = local_94;
  if ((param_4 >> 0xc & 1) != 0) {
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      FUN_034b3ce0(*(undefined8 *)puVar4,param_5,0x1000,auStack_88);
    }
  }
  if (((param_4 >> 0xb & 1) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_1 + 0x18) + 0x78), lVar7 = *(long *)(lVar5 + 0x130),
     iVar2 = *(int *)(lVar7 + (ulong)*(uint *)(lVar5 + 0x138) * 0x10 + -0xc) - *(int *)(lVar7 + 4),
     iVar6 <= iVar2 && iVar2 < param_3 + iVar6)) {
    FUN_034b3ce0(*(undefined8 *)PTR_DAT_047e6f38,param_5,0x800,auStack_88);
  }
  return;
}


