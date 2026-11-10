/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f615e8; name: FUN_01f615e8
 */


void FUN_01f615e8(long param_1)

{
  uint uVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  char *pcVar11;
  char *pcVar12;
  ulong uVar13;
  ulong uVar14;
  
  if ((((*(char *)(param_1 + 0x60) != '\0') ||
       ((*(long *)(param_1 + 0x48) != 0 && (*(short *)(*(long *)(param_1 + 0x48) + 0x1a) != 0)))) &&
      (*(long **)(param_1 + 0x58) != (long *)0x0)) &&
     ((((bVar6 = (**(code **)(**(long **)(param_1 + 0x58) + 0x28))(), puVar4 = PTR_DAT_047d0a08,
        bVar6 != 0xfd && (*(long *)PTR_DAT_047d0a08 != 0)) &&
       (iVar7 = FUN_00f21480(), puVar3 = PTR_DAT_047d0860, iVar7 == 1)) &&
      (((bVar6 < 8 && (*(long *)PTR_DAT_047d0860 != 0)) &&
       ((lVar9 = FUN_00f21488(*(long *)PTR_DAT_047d0860 + 0x10,(&DAT_0485ea48)[bVar6],0x81),
        lVar9 != 0 && (iVar7 = FUN_01f62ac0(), iVar7 != 0)))))))) {
    uVar13 = 0;
    do {
      if (((*(long *)puVar4 != 0) &&
          (iVar7 = FUN_00f21480(), iVar7 == 1 && ((uint)uVar13 & 0xff) < 8)) &&
         (*(long *)puVar3 != 0)) {
        uVar14 = uVar13 & 0xff;
        lVar10 = FUN_00f21488(*(long *)puVar3 + 0x10,(&DAT_0485ea48)[uVar14],0x81);
        if ((lVar10 != 0) && (pcVar11 = (char *)(param_1 + uVar14 * 0x30 + 0xd8), *pcVar11 == '\0'))
        {
          bVar5 = false;
          if (*(char *)(param_1 + uVar14 * 0x30 + 0xda) != '\0') {
            bVar5 = *(char *)(lVar9 + 0x78) == '\x03';
          }
          pcVar12 = (char *)(param_1 + uVar14 * 0x30 + 0xd9);
          if (*pcVar12 != '\0') {
            cVar2 = *(char *)(lVar10 + 0x78);
            if (cVar2 == '\a') {
              *pcVar12 = '\0';
            }
            if (((cVar2 == '\x06') && (!(bool)(bVar5 ^ 1))) &&
               (*pcVar11 = '\x01', *(long *)(param_1 + uVar14 * 0x30 + 0xb0) != 0)) {
              FUN_01f628ec(param_1,*(undefined8 *)(param_1 + uVar14 * 0x30 + 0xd0),uVar13);
            }
          }
        }
      }
      uVar1 = (uint)uVar13 + 1;
      uVar13 = (ulong)uVar1;
      uVar8 = FUN_01f62ac0();
    } while ((uVar1 & 0xff) < uVar8);
  }
  return;
}


