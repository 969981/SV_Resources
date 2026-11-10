/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01739fbc; name: FUN_01739fbc
 */


/* WARNING: Removing unreachable block (ram,0x0173a0b4) */
/* WARNING: Removing unreachable block (ram,0x0173a18c) */

void FUN_01739fbc(char *param_1,byte *param_2)

{
  short *psVar1;
  code *UNRECOVERED_JUMPTABLE;
  char cVar2;
  short sVar3;
  bool bVar4;
  int iVar5;
  undefined *puVar6;
  long lVar7;
  short sVar8;
  undefined1 auStack_a0 [128];
  
  cVar2 = DAT_0484c178;
  if ((1 < *param_2) ||
     (puVar6 = *(undefined **)(param_2 + 8), *(undefined **)(param_2 + 8) == (undefined *)0x0)) {
    if ((*PTR_DAT_047d59a8 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(PTR_DAT_047d59a8);
      puVar6 = PTR_DAT_047d59b0;
      if (iVar5 != 0) {
        *(undefined8 *)(PTR_DAT_047d59b0 + 0x30) = 0;
        *(undefined8 *)(puVar6 + 0x38) = 0;
        *(undefined8 *)(puVar6 + 0x20) = 0;
        *(undefined8 *)(puVar6 + 0x28) = 0;
        *(undefined8 *)(puVar6 + 0x10) = 0;
        *(undefined8 *)(puVar6 + 0x18) = 0;
        *(undefined8 *)puVar6 = 0;
        *(undefined8 *)(puVar6 + 8) = 0;
        FUN_01667884(puVar6);
        *(undefined8 *)(puVar6 + 0x30) = 0x3f80000000000000;
        puVar6[0x38] = 0;
        __cxa_guard_release(PTR_DAT_047d59a8);
      }
    }
    else {
      puVar6 = PTR_DAT_047d59b0;
    }
  }
  UNRECOVERED_JUMPTABLE = (code *)PTR_FUN_047deb50;
  if (cVar2 == '\0') {
    UNRECOVERED_JUMPTABLE = (code *)0x0;
  }
  cVar2 = *param_1;
  if (cVar2 == '\x02') {
    if ((*(long *)(param_1 + 8) == 0) ||
       (lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar7 == 0)) {
      return;
    }
    lVar7 = lVar7 + -0x28;
  }
  else {
    if (cVar2 == '\x03') {
      lVar7 = *(long *)(param_1 + 8);
      if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar7 + 0x1a);
        sVar8 = *(short *)(lVar7 + 0x1a);
        do {
          sVar3 = *psVar1;
          if (sVar3 == sVar8) {
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar8 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 != '\0') goto LAB_0173a160;
            bVar4 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_0173a160:
            bVar4 = false;
          }
          if (bVar4) {
            if (*(long *)(lVar7 + 0x10) != 0) {
              (*UNRECOVERED_JUMPTABLE)(*(long *)(lVar7 + 0x10) + -0x28,puVar6);
            }
            break;
          }
          sVar8 = sVar3;
        } while (sVar3 != 0);
      }
      FUN_02475828(auStack_a0 + 0x88);
      return;
    }
    if ((cVar2 != '\x01') && (cVar2 != '\0')) {
      return;
    }
    lVar7 = *(long *)(param_1 + 8);
    if (lVar7 == 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0173a0c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(lVar7,puVar6);
  return;
}


