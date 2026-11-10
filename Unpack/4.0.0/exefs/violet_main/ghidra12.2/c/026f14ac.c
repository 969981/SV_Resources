/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026f14ac; name: FUN_026f14ac
 */


void FUN_026f14ac(undefined1 *param_1,long param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_2 + 0x8068);
  plVar1 = *(long **)(param_2 + 0x8070);
  if (plVar3 == plVar1) {
LAB_026f1504:
    *param_1 = 0;
    if (plVar3 != plVar1) {
      lVar2 = plVar3[1];
      *(long *)(param_1 + 8) = *plVar3;
      *(long *)(param_1 + 0x10) = lVar2;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      FUN_00ca1a48(param_1 + 0x18,plVar3 + 2);
      *param_1 = 1;
    }
  }
  else {
    do {
      if ((*plVar3 == *param_3) && ((short)plVar3[1] == (short)param_3[1])) goto LAB_026f1504;
      plVar3 = plVar3 + 4;
    } while (plVar1 != plVar3);
    *param_1 = 0;
  }
  return;
}


