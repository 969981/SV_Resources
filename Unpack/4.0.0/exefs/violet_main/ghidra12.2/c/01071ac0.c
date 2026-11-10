/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01071ac0; name: FUN_01071ac0
 */


long FUN_01071ac0(long param_1,byte *param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long local_48 [3];
  
  plVar4 = (long *)(param_1 + 8);
  plVar5 = (long *)*plVar4;
  if (plVar5 == (long *)0x0) {
    plVar5 = plVar4;
LAB_01071b24:
    lVar6 = *plVar4;
    if (*plVar4 == 0) {
      FUN_021168c0(local_48,param_1,param_3);
      FUN_02116938(param_1,plVar5,plVar4,local_48[0]);
      lVar6 = local_48[0];
    }
    return lVar6;
  }
  bVar1 = *param_2;
  plVar4 = (long *)(param_1 + 8);
  do {
    bVar2 = *(byte *)(plVar5 + 4);
    if (bVar1 <= bVar2 && bVar2 != bVar1) {
      plVar3 = (long *)*plVar5;
      plVar4 = plVar5;
      if (plVar3 == (long *)0x0) {
        goto LAB_01071b24;
      }
    }
    else {
      if (bVar1 <= bVar2) goto LAB_01071b24;
      plVar4 = plVar5 + 1;
      plVar3 = (long *)*plVar4;
      if (plVar3 == (long *)0x0) goto LAB_01071b24;
    }
    plVar5 = plVar3;
  } while( true );
}


