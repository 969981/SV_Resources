/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0353b6c0; name: FUN_0353b6c0
 */


void FUN_0353b6c0(int param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  
  if ((*(uint *)(param_2 + 0x28) & 1) == 0) {
    uVar5 = *(uint *)(param_2 + 0x34);
    uVar8 = (&DAT_048d2168)[(long)param_1 * 199];
    uVar12 = *(uint *)(param_2 + 0x2c);
    if (*(ulong *)(&DAT_048d2150 + (long)param_1 * 0x638) <= uVar8) {
      (**(code **)(&DAT_048d2110 + (long)param_1 * 0x638))
                (param_2,uVar8 * uVar12,*(undefined8 *)(param_2 + 0x58),0);
    }
    param_2 = param_2 - uVar8 * uVar5;
  }
  else {
    uVar12 = *(uint *)(param_2 + 0x2c);
    *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) | 0xb;
  }
  piVar1 = (int *)(param_2 + 0x38);
  do {
    iVar4 = *piVar1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar7) {
      *piVar1 = iVar4 - uVar12;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if ((int)(iVar4 - uVar12) < 1) {
    lVar10 = (long)param_1 * 0x638;
    uVar8 = (&DAT_048d2168)[(long)param_1 * 199];
    lVar9 = 0x30;
    if (*(ulong *)(&DAT_048d2150 + lVar10) <= uVar8) {
      lVar9 = 0x2c;
    }
    lVar11 = uVar8 * *(uint *)(param_2 + 0x30);
    iVar4 = *(int *)(param_2 + 0x3c);
    lVar9 = uVar8 * *(uint *)(param_2 + lVar9);
    if (iVar4 == 0 || lVar11 == 0) {
      uVar8 = 0;
    }
    lVar2 = uVar8 + lVar11;
    lVar3 = param_2 + iVar4 * -8;
    if (iVar4 == 0 || lVar11 == 0) {
      lVar3 = param_2;
    }
    (**(code **)(&DAT_048d2110 + lVar10))(lVar3,lVar9,*(undefined8 *)(param_2 + 0x58),lVar2);
    if (lVar2 != 0) {
      do {
        lVar9 = DAT_048d2d80;
        lVar10 = DAT_048d2d80 - lVar2;
        while (DAT_048d2d80 == lVar9) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(0x48d2d80,0x10);
          if (bVar7) {
            cVar6 = ExclusiveMonitorsStatus();
            DAT_048d2d80 = lVar10;
          }
          if (cVar6 == '\0') {
            return;
          }
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
  return;
}


