/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01065104; name: FUN_01065104
 */


undefined8 FUN_01065104(undefined8 param_1,byte *param_2,byte *param_3,undefined8 param_4)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  
  puVar5 = PTR_DAT_047e2fe8;
  uVar9 = 0x811c9dc5;
  if (param_2 == (byte *)0x0) {
    uVar10 = 0;
  }
  else {
    bVar8 = *param_2;
    uVar10 = uVar9;
    if (bVar8 != 0) {
      do {
        param_2 = param_2 + 1;
        bVar2 = bVar8 + 0x20;
        if (0x19 < (byte)(bVar8 + 0xbf)) {
          bVar2 = bVar8;
        }
        uVar10 = uVar10 * 0x1000193 ^ (uint)bVar2;
        bVar8 = *param_2;
      } while (bVar8 != 0);
    }
  }
  if (param_3 == (byte *)0x0) {
    uVar6 = 0xf;
  }
  else {
    bVar8 = *param_3;
    if (bVar8 != 0) {
      do {
        param_3 = param_3 + 1;
        bVar2 = bVar8 + 0x20;
        if (0x19 < (byte)(bVar8 + 0xbf)) {
          bVar2 = bVar8;
        }
        uVar9 = uVar9 * 0x1000193 ^ (uint)bVar2;
        bVar8 = *param_3;
      } while (bVar8 != 0);
    }
    uVar6 = 0xf;
    if ((uVar10 != 0) && (uVar9 != 0)) {
      lVar7 = FUN_01065210(*(undefined8 *)PTR_DAT_047e2fe8,8,0x14);
      *(undefined8 *)(lVar7 + 4) = param_4;
      *(uint *)(lVar7 + 0xc) = uVar10;
      *(uint *)(lVar7 + 0x10) = uVar9;
      piVar1 = (int *)(*(long *)puVar5 + 0x9c);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      uVar6 = 1;
    }
  }
  return uVar6;
}


