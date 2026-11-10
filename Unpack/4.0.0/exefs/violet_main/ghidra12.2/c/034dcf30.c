/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034dcf30; name: FUN_034dcf30
 */


undefined8 FUN_034dcf30(long param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  puVar1 = PTR_DAT_047e2fd0;
  plVar2 = *(long **)(param_1 + 0x10);
  if (plVar2 != (long *)0x0) {
    plVar3 = (long *)0x0;
    do {
      if (plVar2[1] == param_2) {
        if (*(char *)(param_1 + 0x38) == '\0') {
          plVar5 = (long *)*plVar2;
          plVar4 = (long *)(param_1 + 0x10);
          if (*(long **)(param_1 + 0x10) != plVar2) {
            plVar4 = plVar3;
          }
          *plVar4 = (long)plVar5;
          if (*(long **)(param_1 + 0x18) == plVar2) {
            *(long **)(param_1 + 0x18) = plVar3;
          }
          if ((plVar2 < *(long **)(param_1 + 0x28)) ||
             (*(long **)(param_1 + 0x28) + (ulong)*(uint *)(param_1 + 0x30) * 3 <= plVar2)) {
            (**(code **)(puVar1 + 0x30))(0);
          }
          else {
            *plVar2 = *(long *)(param_1 + 0x20);
            *(long **)(param_1 + 0x20) = plVar2;
          }
          *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
          plVar2 = plVar5;
        }
        else {
          plVar4 = (long *)*plVar2;
          plVar2[1] = 0;
          *(undefined1 *)(param_1 + 0x39) = 1;
          plVar3 = plVar2;
          plVar2 = plVar4;
        }
      }
      else {
        plVar3 = plVar2;
        plVar2 = (long *)*plVar2;
      }
    } while (plVar2 != (long *)0x0);
  }
  return 1;
}


