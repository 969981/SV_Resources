/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034e4ce8; name: FUN_034e4ce8
 */


int FUN_034e4ce8(long param_1,undefined4 param_2,undefined4 param_3,long param_4,uint param_5)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined1 local_78;
  undefined1 local_70;
  undefined8 local_68;
  
  puVar2 = PTR_DAT_047e2fd0;
  uVar7 = (ulong)param_5;
  if (param_5 == 0) {
    uVar7 = 0;
LAB_034e4d50:
    *(undefined4 *)(param_1 + 0x20) = param_2;
    *(undefined4 *)(param_1 + 0x24) = param_3;
    lVar4 = (**(code **)(puVar2 + 0x10))(0,uVar7 * 0xc);
    if (lVar4 != 0) {
      if (param_5 != 0) {
        uVar9 = 0;
        puVar10 = (undefined4 *)(lVar4 + 8);
        puVar8 = (undefined4 *)(param_4 + 8);
        do {
          puVar10[-2] = puVar8[-2];
          puVar10[-1] = (float)(uVar9 & 0xffffffff);
          *puVar10 = *puVar8;
          uVar1 = *(uint *)(param_1 + 0x18);
          uVar6 = *(uint *)(param_1 + 0x1c);
          if (uVar1 < uVar6) {
LAB_034e4dd8:
            if (uVar1 < uVar6) {
              uVar6 = *(uint *)(param_1 + 0x18);
              *(uint *)(param_1 + 0x18) = uVar6 + 1;
              if (*(long *)(param_1 + 0x10) != 0) {
                *(undefined4 *)(*(long *)(param_1 + 0x10) + (ulong)uVar6 * 4) = puVar8[-1];
              }
            }
          }
          else {
            iVar3 = uVar6 + (uVar6 >> 1);
            if (uVar6 == 0) {
              iVar3 = 1;
            }
            uVar6 = iVar3 + uVar6;
            lVar5 = (**(code **)(puVar2 + 0x20))
                              (2,*(undefined8 *)(param_1 + 0x10),(ulong)uVar6 << 2);
            if (lVar5 != 0) {
              *(long *)(param_1 + 0x10) = lVar5;
              *(uint *)(param_1 + 0x1c) = uVar6;
              goto LAB_034e4dd8;
            }
          }
          uVar9 = uVar9 + 1;
          puVar10 = puVar10 + 3;
          puVar8 = puVar8 + 3;
        } while (uVar7 != uVar9);
      }
      local_90 = 0;
      local_88 = 0;
      local_80 = 0;
      local_68 = 0;
      local_78 = 0xff;
      local_70 = 0xff;
      iVar3 = FUN_034b5ad4(*(undefined8 *)PTR_DAT_047e6fd8,param_1,param_2,param_3,1,0x3c,0,0,lVar4,
                           param_5,&local_90,6,1);
      (**(code **)(puVar2 + 0x30))(0,lVar4);
      if (iVar3 == 1) {
        return 1;
      }
      goto LAB_034e4e98;
    }
  }
  else {
    lVar4 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(2,uVar7 << 2);
    *(long *)(param_1 + 0x10) = lVar4;
    if (lVar4 != 0) {
      *(uint *)(param_1 + 0x1c) = param_5;
      goto LAB_034e4d50;
    }
  }
  iVar3 = 0x34;
LAB_034e4e98:
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    (**(code **)(puVar2 + 0x30))(2);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return iVar3;
}


