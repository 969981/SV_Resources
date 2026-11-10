/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0012a020; name: FUN_0012a020
 */


/* WARNING: Removing unreachable block (ram,0x0012a0ac) */

void FUN_0012a020(long param_1,long *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  if (param_3 == 0) {
    return;
  }
  if ((*(byte *)((long)param_2 + 9) >> 6 & 1) != 0) {
    return;
  }
  if ((*(byte *)(param_3 + 10) >> 2 & 1) != 0) {
    return;
  }
  lVar5 = *(long *)(param_1 + 0x18);
  lVar2 = FUN_0013dec0(param_3,2,*(undefined8 *)(lVar5 + 0x128));
  if (lVar2 == 0) {
    return;
  }
  if (*(byte *)(lVar5 + 0x65) - 3 < 4) {
    *(byte *)((long)param_2 + 9) =
         *(byte *)(lVar5 + 100) & 0x18 | *(byte *)((long)param_2 + 9) & 199;
    plVar6 = *(long **)(lVar5 + 0x78);
    if (plVar6 == param_2) {
      do {
        while (plVar3 = (long *)*plVar6, plVar3 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)(param_1 + 0x18) + 100);
          if ((*(byte *)((long)plVar3 + 9) & (bVar1 ^ 0x18)) == 0) {
            *(byte *)((long)plVar3 + 9) = *(byte *)((long)plVar3 + 9) & 0xc0 | bVar1 & 0x18;
          }
          else {
            *plVar6 = *plVar3;
            FUN_0012bbc0(param_1);
            plVar3 = plVar6;
          }
          plVar4 = (long *)0x0;
          if (*plVar3 != 0) {
            plVar4 = plVar3;
          }
          if (plVar4 != plVar6) goto LAB_0012a114;
        }
        plVar4 = (long *)0x0;
      } while (plVar6 == (long *)0x0);
LAB_0012a114:
      *(long **)(lVar5 + 0x78) = plVar4;
    }
    goto LAB_0012a14c;
  }
  if (*(long **)(lVar5 + 0xc0) == param_2) {
    *(long *)(lVar5 + 0xc0) = *param_2;
    if (*(long **)(lVar5 + 200) == param_2) goto LAB_0012a1a4;
LAB_0012a134:
    if (*(long **)(lVar5 + 0xd0) != param_2) goto LAB_0012a140;
LAB_0012a1b8:
    *(long *)(lVar5 + 0xd0) = *param_2;
    plVar6 = *(long **)(lVar5 + 0xd8);
  }
  else {
    if (*(long **)(lVar5 + 200) != param_2) goto LAB_0012a134;
LAB_0012a1a4:
    *(long *)(lVar5 + 200) = *param_2;
    if (*(long **)(lVar5 + 0xd0) == param_2) goto LAB_0012a1b8;
LAB_0012a140:
    plVar6 = *(long **)(lVar5 + 0xd8);
  }
  if (plVar6 == param_2) {
    *(long *)(lVar5 + 0xd8) = *param_2;
  }
LAB_0012a14c:
  plVar6 = (long *)(lVar5 + 0x70);
  do {
    plVar3 = plVar6;
    plVar6 = (long *)*plVar3;
  } while (plVar6 != param_2);
  *plVar3 = *param_2;
  *param_2 = *(long *)(lVar5 + 0x80);
  *(long **)(lVar5 + 0x80) = param_2;
  *(byte *)((long)param_2 + 9) = *(byte *)((long)param_2 + 9) | 0x40;
  return;
}


