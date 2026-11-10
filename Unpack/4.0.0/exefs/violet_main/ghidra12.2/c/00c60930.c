/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c60930; name: FUN_00c60930
 */


void FUN_00c60930(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined8 local_68;
  
  lVar9 = *(long *)(param_1 + 0x220);
  if (lVar9 != 0) {
    iVar2 = *(int *)(lVar9 + 0x504);
    if (iVar2 != 0) {
      iVar11 = 0;
      do {
        *(undefined1 *)(lVar9 + (ulong)(uint)(iVar11 + *(int *)(lVar9 + 0x500)) * 0x10) = 0;
        uVar1 = iVar11 + *(int *)(lVar9 + 0x500);
        iVar11 = iVar11 + 1;
        *(undefined1 *)(lVar9 + (ulong)uVar1 * 0x10 + 0x280) = 0;
      } while (iVar2 != iVar11);
    }
    FUN_00c60b48(*(undefined8 *)(param_1 + 0x58),param_2);
  }
  puVar4 = PTR_DAT_047e0d60;
  uVar10 = (ulong)*(uint *)(*(long *)(param_1 + 0x58) + 0x240);
  lVar9 = *(long *)(*(long *)(param_1 + 0x58) + 0x208);
  if ((*(char *)(lVar9 + uVar10 * 0x18) != '\0') && (*(char *)(lVar9 + uVar10 * 0x18) != '\0')) {
    lVar9 = *(long *)(lVar9 + uVar10 * 0x18 + 8);
    local_68 = 0;
    if (lVar9 != 0) {
      local_68 = *(undefined8 *)(lVar9 + 0xa0);
    }
    (**(code **)PTR_DAT_047e0d60)(*(undefined8 *)(param_2 + 0x28),1,&local_68);
  }
  (**(code **)puVar4)(*(undefined8 *)(param_2 + 0x28),
                      (ulong)(*(long *)(param_1 + 0xe0) - *(long *)(param_1 + 0xd8)) >> 3);
  if (*(char *)(param_1 + 0x28a) != '\0') {
    lVar12 = *(long *)(param_1 + 0x30);
    lVar9 = *(long *)(lVar12 + 0x120);
    if (lVar9 != 0) {
      uVar1 = *(uint *)(lVar12 + 0x118);
      uVar3 = *(undefined4 *)(lVar12 + 0x11c);
      pcVar6 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar9 + 0x70) + 0x110),lVar9 + 0x30);
      puVar5 = PTR_DAT_047e0cc0;
      puVar4 = PTR_DAT_047e0bf8;
      if ((*pcVar6 != '\0') && (uVar1 != 0)) {
        uVar16 = 1;
        uVar13 = *(undefined8 *)(*(long *)(pcVar6 + 8) + 0x20);
        do {
          if ((uVar16 & uVar1) != 0) {
            if ((int)uVar16 < 8) {
              if (uVar16 == 1) {
                uVar14 = 0;
              }
              else if (uVar16 == 4) {
                uVar14 = 2;
              }
              else {
LAB_00c60ad0:
                uVar14 = 1;
              }
            }
            else if (uVar16 == 8) {
              uVar14 = 3;
            }
            else if (uVar16 == 0x10) {
              uVar14 = 4;
            }
            else {
              if (uVar16 != 0x20) goto LAB_00c60ad0;
              uVar14 = 5;
            }
            uVar15 = *(undefined8 *)(param_2 + 0x28);
            uVar7 = (**(code **)PTR_DAT_047e0be8)(uVar13);
            uVar8 = (**(code **)puVar4)(uVar13);
            (**(code **)puVar5)(uVar15,uVar14,uVar3,uVar7,uVar8);
          }
          uVar16 = uVar16 * 2;
        } while (uVar16 <= uVar1);
      }
    }
  }
  return;
}


