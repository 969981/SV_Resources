/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f61a74; name: FUN_01f61a74
 */


void FUN_01f61a74(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  int local_78 [5];
  byte local_64 [4];
  
  if (((*(char *)(param_1 + 0x60) != '\0') ||
      ((*(long *)(param_1 + 0x48) != 0 && (*(short *)(*(long *)(param_1 + 0x48) + 0x1a) != 0)))) &&
     ((plVar13 = *(long **)(param_1 + 0x58), plVar13 != (long *)0x0 &&
      ((uVar5 = (**(code **)(*plVar13 + 0x28))(plVar13), (uVar5 & 0xff) != 0xfd &&
       (uVar8 = (**(code **)*plVar13)(plVar13), (uVar8 & 1) != 0)))))) {
    local_64[0] = 0;
    iVar6 = FUN_01f62ac0();
    puVar3 = PTR_DAT_047d0860;
    if (iVar6 != 0) {
      uVar8 = 0;
      plVar14 = (long *)PTR_DAT_047d0a08;
      while( true ) {
        if (((((((uint)uVar8 != (uVar5 & 0xff)) &&
               (*(char *)(param_1 + uVar8 * 0x30 + 0xd9) == '\0')) && (*plVar14 != 0)) &&
             ((iVar6 = FUN_00f21480(), (uint)uVar8 < 8 && (iVar6 == 1)))) &&
            (((*(long *)puVar3 != 0 &&
              (lVar9 = FUN_00f21488(*(long *)puVar3 + 0x10,(&DAT_0485ea48)[uVar8],0x81), lVar9 != 0)
              ) && (((10 < *(byte *)(lVar9 + 0x78) ||
                     ((1 << (ulong)(*(byte *)(lVar9 + 0x78) & 0x1f) & 0x736U) == 0)) &&
                    (lVar10 = (**(code **)(*plVar13 + 0x30))(plVar13,local_64), lVar10 != 0)))))) &&
           (FUN_00f222d4(local_78,lVar9,lVar10), local_78[0] == 0)) {
          uVar8 = (ulong)local_64[0];
          if (*(long *)(param_1 + uVar8 * 0x30 + 0xb0) == 0) {
            FUN_01f5fbb0(&local_98,*(undefined8 *)(param_1 + 0x40));
            uVar4 = local_98;
            uVar8 = (ulong)local_64[0];
            lVar12 = param_1 + uVar8 * 0x30;
            local_98 = 0;
            lVar11 = *(long *)(lVar12 + 0xb0);
            puVar2 = (undefined8 *)(lVar12 + 0xb8);
            *(undefined8 *)(lVar12 + 0xb0) = uVar4;
            if (lVar11 == 0) {
              *(undefined8 *)(lVar12 + 0xc0) = uStack_88;
              *(undefined8 *)(lVar12 + 200) = local_80;
              *puVar2 = local_90;
            }
            else {
              FUN_01f5fed0(puVar2);
              *(undefined8 *)(lVar12 + 0xc0) = uStack_88;
              *(undefined8 *)(lVar12 + 200) = local_80;
              *puVar2 = local_90;
              uVar8 = (ulong)local_64[0];
            }
            plVar14 = (long *)PTR_DAT_047d0a08;
          }
          FUN_00f22458(&local_98,lVar9,lVar10,*(undefined8 *)(param_1 + uVar8 * 0x30 + 0xb0),0x97e08
                       ,*(undefined1 *)(param_1 + 0x68));
          if ((int)local_98 == 0) {
            lVar9 = param_1 + (ulong)local_64[0] * 0x30;
            *(long *)(lVar9 + 0xd0) = lVar10;
            *(undefined1 *)(lVar9 + 0xd9) = 1;
          }
        }
        bVar1 = local_64[0] + 1;
        local_64[0] = bVar1;
        uVar7 = FUN_01f62ac0();
        if (uVar7 <= bVar1) break;
        uVar8 = (ulong)local_64[0];
      }
    }
  }
  return;
}


