/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01898a38; name: FUN_01898a38
 */


void FUN_01898a38(long param_1,long *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined4 local_3c;
  undefined4 *local_38;
  
  if ((*param_2 == 0) || (*(short *)(*param_2 + 0x1a) == 0)) {
    if ((char)param_2[3] == '\0') {
      return;
    }
  }
  else if (((char)param_2[3] == '\0') && ((*param_2 == 0 || (*(short *)(*param_2 + 0x1a) == 0)))) {
    puVar1 = (undefined8 *)0x0;
    goto LAB_01898a90;
  }
  puVar1 = (undefined8 *)param_2[2];
LAB_01898a90:
  local_3c = (**(code **)*puVar1)();
  local_38 = &local_3c;
  plVar3 = (long *)(param_1 + 0x68);
  plVar4 = (long *)*plVar3;
  plVar6 = *(long **)(param_1 + 0x70);
  if ((plVar4 != plVar6) && (uVar2 = FUN_01898c08(&local_38,plVar4), (uVar2 & 1) == 0)) {
    do {
      plVar5 = plVar4 + 4;
      plVar4 = plVar6;
      if (plVar6 == plVar5) break;
      uVar2 = FUN_01898c08(&local_38,plVar5);
      plVar4 = plVar5;
    } while ((uVar2 & 1) == 0);
  }
  if (*(long **)(param_1 + 0x70) != plVar4) {
    FUN_01898b80(plVar3,plVar4);
    plVar4 = *(long **)(param_1 + 0x70);
  }
  plVar6 = (long *)*plVar3;
  if (plVar6 != plVar4) {
    do {
      if (((*plVar6 == 0) || (*(short *)(*plVar6 + 0x1a) == 0)) && ((char)plVar6[3] == '\0')) {
        plVar6 = (long *)FUN_01898b80(plVar3);
      }
      else {
        plVar6 = plVar6 + 4;
      }
    } while (plVar6 != *(long **)(param_1 + 0x70));
  }
  return;
}


