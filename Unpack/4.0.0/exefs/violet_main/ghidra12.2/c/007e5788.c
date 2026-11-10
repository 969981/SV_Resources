/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e5788; name: FUN_007e5788
 */


void FUN_007e5788(long param_1,long *param_2,undefined2 param_3,int param_4)

{
  void *__dest;
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  uint uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  undefined8 local_80;
  undefined4 local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  undefined1 auStack_68 [8];
  
  if (*(int *)(param_1 + 0x24) != 0) {
    local_80 = 0;
    FUN_007935cc(&local_80);
    lVar10 = local_80 - *(long *)(param_1 + 8);
    plVar6 = (long *)FUN_0079365c();
    puVar4 = PTR_DAT_047d0860;
    lVar8 = 0;
    if (*plVar6 != 0) {
      lVar8 = lVar10 / *plVar6;
    }
    if (param_4 <= lVar8) {
      uVar7 = FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
      FUN_007f4e70(auStack_68,uVar7,0);
      uVar1 = (*(uint *)(param_1 + 0x5f0) >> 1 & 0x55555555) +
              (*(uint *)(param_1 + 0x5f0) & 0x55555555);
      uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
      uVar1 = (uVar1 >> 4 & 0x7070707) + (uVar1 & 0x7070707);
      uVar1 = (uVar1 >> 8 & 0xf000f) + (uVar1 & 0xf000f);
      FUN_01f7c4e8(*(undefined8 *)puVar4);
      uVar5 = FUN_007f4e68();
      if ((uVar1 & 0x1f) + (uVar1 >> 0x10) != (uVar5 & 0xffff) - 1) {
        __dest = (void *)(param_1 + 0x28);
        uVar5 = (*(int *)((long)param_2 + 0x34) + (uint)*(ushort *)(*(long *)puVar4 + 0x50) * -2) -
                0x31;
        uVar1 = 0;
        if (uVar5 != 0) {
          uVar1 = (*(int *)(param_1 + 0x24) - 4U) / uVar5;
        }
        uVar1 = uVar1 + 1;
        memcpy(__dest,*(void **)(param_1 + 0x18),3);
        bVar3 = *(byte *)(param_1 + 0x10);
        uVar12 = (uint)bVar3;
        if ((uint)bVar3 < (uVar1 & 0xff)) {
          uVar9 = uVar5 * bVar3 + 3;
          do {
            *(char *)(param_1 + 0x2b) = (char)uVar1;
            *(char *)(param_1 + 0x2c) = (char)uVar12;
            *(char *)(param_1 + 0x2d) = (char)(uVar9 >> 8);
            *(char *)(param_1 + 0x2e) = (char)uVar9;
            if (uVar12 == (uVar1 & 0xff) - 1) {
              uVar11 = *(int *)(param_1 + 0x24) - (uVar9 & 0xffff);
            }
            else {
              uVar11 = uVar5;
            }
            uVar2 = uVar11 + (uVar9 & 0xffff);
            if (*(uint *)(param_1 + 0x20) <= uVar2) {
              return;
            }
            memcpy((void *)(param_1 + 0x2f),
                   (void *)(*(long *)(param_1 + 0x18) + (ulong)(ushort)uVar9),(ulong)uVar11);
            local_70 = 0;
            local_6c = 0;
            local_6a = 0;
            local_80._0_4_ = CONCAT22(0x9800,param_3);
            lVar8 = (**(code **)(*param_2 + 0x70))
                              (param_2,&local_80,
                               ((int)(void *)(param_1 + 0x2f) + uVar11) - (int)__dest,&local_70);
            if (lVar8 == 0) {
              if (*(int *)(*(long *)PTR_DAT_047d11a0 + 0x2c) +
                  *(int *)(*(long *)PTR_DAT_047d11a0 + 0x28) != 0) {
                *(char *)(param_1 + 0x10) = (char)uVar12;
                return;
              }
              *(undefined1 *)(param_1 + 0x10) = 0;
              goto LAB_007e5994;
            }
            FUN_007eba90(&local_80,param_2,__dest);
            uVar12 = uVar12 + 1;
            uVar9 = uVar2;
          } while ((uVar1 & 0xff) != (uVar12 & 0xff));
        }
        *(undefined1 *)(param_1 + 0x10) = 0;
        *(undefined1 *)(param_1 + 0x5f4) = 1;
LAB_007e5994:
        FUN_007935cc((long *)(param_1 + 8));
      }
    }
  }
  return;
}


