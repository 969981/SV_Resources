/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012af8a4; name: FUN_012af8a4
 */


void FUN_012af8a4(long *param_1)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar4 = param_1[1];
  lVar5 = param_1[2];
  while (lVar5 != lVar4) {
    param_1[2] = lVar5 + -0x2b0;
    pcVar3 = *(code **)(lVar5 + -0x78);
    if (pcVar3 != (code *)0x0) {
      *(undefined8 *)(lVar5 + -0x70) = 0;
      *(undefined8 *)(lVar5 + -0x68) = 0;
      *(undefined8 *)(lVar5 + -0x80) = 0;
      *(undefined8 *)(lVar5 + -0x78) = 0;
      (*pcVar3)(lVar5 + -0x60);
    }
    pcVar3 = *(code **)(lVar5 + -0xf8);
    if (pcVar3 != (code *)0x0) {
      *(undefined8 *)(lVar5 + -0xf0) = 0;
      *(undefined8 *)(lVar5 + -0xe8) = 0;
      *(undefined8 *)(lVar5 + -0x100) = 0;
      *(undefined8 *)(lVar5 + -0xf8) = 0;
      (*pcVar3)(lVar5 + -0xe0);
    }
    pcVar3 = *(code **)(lVar5 + -0x178);
    if (pcVar3 != (code *)0x0) {
      *(undefined8 *)(lVar5 + -0x168) = 0;
      *(undefined8 *)(lVar5 + -0x170) = 0;
      *(undefined8 *)(lVar5 + -0x178) = 0;
      *(undefined8 *)(lVar5 + -0x180) = 0;
      (*pcVar3)(lVar5 + -0x160);
    }
    pcVar3 = *(code **)(lVar5 + -0x1f8);
    if (pcVar3 != (code *)0x0) {
      *(undefined8 *)(lVar5 + -0x1e8) = 0;
      *(undefined8 *)(lVar5 + -0x1f0) = 0;
      *(undefined8 *)(lVar5 + -0x1f8) = 0;
      *(undefined8 *)(lVar5 + -0x200) = 0;
      (*pcVar3)(lVar5 + -0x1e0);
    }
    pcVar3 = *(code **)(lVar5 + -0x278);
    if (pcVar3 != (code *)0x0) {
      *(undefined8 *)(lVar5 + -0x268) = 0;
      *(undefined8 *)(lVar5 + -0x270) = 0;
      *(undefined8 *)(lVar5 + -0x278) = 0;
      *(undefined8 *)(lVar5 + -0x280) = 0;
      (*pcVar3)(lVar5 + -0x260);
    }
    if (*(long **)(lVar5 + -0x298) != (long *)0x0) {
      (**(code **)(**(long **)(lVar5 + -0x298) + 0x20))();
    }
    lVar5 = param_1[2];
  }
  lVar4 = *param_1;
  if (lVar4 == 0) {
    return;
  }
  lVar5 = param_1[3];
  plVar6 = *(long **)param_1[4];
  uVar1 = (**(code **)(*plVar6 + 0xf8))(plVar6);
  if ((uVar1 & 1) != 0) {
    lVar2 = FUN_00c4e600();
    if (0 < *(int *)(lVar2 + 0x12c8)) {
      FUN_00c48fe8(plVar6,lVar4,lVar5 - lVar4,0x10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x012afa08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x18))(plVar6,lVar4,lVar5 - lVar4,0x10);
  return;
}


