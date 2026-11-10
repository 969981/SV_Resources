/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0353577c; name: FUN_0353577c
 */


void FUN_0353577c(long param_1,undefined4 param_2)

{
  int iVar1;
  long *plVar2;
  int *local_30;
  undefined4 local_24;
  
  if (*(char *)(param_1 + 0xc0) != '\0') {
    if (*(long *)(param_1 + 0x78) == 0) {
      if (*(int *)(param_1 + 0xb8) != 0) goto LAB_035357c4;
    }
    else if ((*(int *)(param_1 + 0xb8) != 0) || (*(long *)(*(long *)(param_1 + 0x78) + 0x18) != 0))
    goto LAB_035357c4;
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    FUN_0353059c(&local_30,param_1 + 0x98);
    if (((local_30 != (int *)0x0) && (plVar2 = *(long **)(param_1 + 0x10), plVar2 != (long *)0x0))
       && (*(long *)(param_1 + 0x90) != 0)) {
      (**(code **)(*plVar2 + 0x98))
                (plVar2,*(undefined4 *)(*(long *)(param_1 + 0x90) + 0x18),&local_30);
    }
    if ((local_30 != (int *)0x0) && (iVar1 = *local_30, *local_30 = iVar1 + -1, iVar1 + -1 == 0)) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(local_24,local_30);
    }
  }
LAB_035357c4:
  FUN_0351c700(param_1,param_2);
  return;
}


