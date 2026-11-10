/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028b2574; name: FUN_028b2574
 */


void FUN_028b2574(long param_1,uint *param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 local_48 [3];
  
  plVar2 = (long *)(param_1 + 8);
  plVar3 = (long *)*plVar2;
  if (plVar3 == (long *)0x0) {
    plVar3 = plVar2;
LAB_028b25dc:
    if (*plVar2 == 0) {
      FUN_028b36b4(local_48,param_1,param_3);
      FUN_028b372c(param_1,plVar3,plVar2,local_48[0]);
    }
    return;
  }
  plVar2 = (long *)(param_1 + 8);
  do {
    if (*param_2 < *(uint *)((long)plVar3 + 0x1c)) {
      plVar1 = (long *)*plVar3;
      plVar2 = plVar3;
      if (plVar1 == (long *)0x0) {
        goto LAB_028b25dc;
      }
    }
    else {
      if (*param_2 <= *(uint *)((long)plVar3 + 0x1c)) goto LAB_028b25dc;
      plVar2 = plVar3 + 1;
      plVar1 = (long *)*plVar2;
      if (plVar1 == (long *)0x0) goto LAB_028b25dc;
    }
    plVar3 = plVar1;
  } while( true );
}


