/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008b0e44; name: FUN_008b0e44
 */


void FUN_008b0e44(long param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_2 + 0x138) != 0) {
    plVar1 = (long *)(param_2 + 0x138);
    uVar2 = FUN_00896e78(0x10);
    *(undefined8 *)(param_1 + 0x138) = uVar2;
    uVar2 = FUN_00896e78(0x40);
    *(undefined8 *)(*(long *)(param_1 + 0x138) + 8) = uVar2;
    uVar2 = FUN_00896e78(0x40);
    **(undefined8 **)(param_1 + 0x138) = uVar2;
    **(undefined4 **)(*(long *)(param_1 + 0x138) + 8) = **(undefined4 **)(*plVar1 + 8);
    *(undefined4 *)**(undefined8 **)(param_1 + 0x138) = **(undefined4 **)*plVar1;
    *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x138) + 8) + 4) =
         *(undefined4 *)(*(long *)(*plVar1 + 8) + 4);
    *(undefined4 *)(**(long **)(param_1 + 0x138) + 4) = *(undefined4 *)(*(long *)*plVar1 + 4);
    *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x138) + 8) + 8) =
         *(undefined4 *)(*(long *)(*plVar1 + 8) + 8);
    *(undefined4 *)(**(long **)(param_1 + 0x138) + 8) = *(undefined4 *)(*(long *)*plVar1 + 8);
    *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x138) + 8) + 0xc) =
         *(undefined4 *)(*(long *)(*plVar1 + 8) + 0xc);
    *(undefined4 *)(**(long **)(param_1 + 0x138) + 0xc) = *(undefined4 *)(*(long *)*plVar1 + 0xc);
    *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x138) + 8) + 0x10) =
         *(undefined4 *)(*(long *)(*plVar1 + 8) + 0x10);
    *(undefined4 *)(**(long **)(param_1 + 0x138) + 0x10) = *(undefined4 *)(*(long *)*plVar1 + 0x10);
    *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x138) + 8) + 0x14) =
         *(undefined4 *)(*(long *)(*plVar1 + 8) + 0x14);
    *(undefined4 *)(**(long **)(param_1 + 0x138) + 0x14) = *(undefined4 *)(*(long *)*plVar1 + 0x14);
    *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x138) + 8) + 0x18) =
         *(undefined4 *)(*(long *)(*plVar1 + 8) + 0x18);
    *(undefined4 *)(**(long **)(param_1 + 0x138) + 0x18) = *(undefined4 *)(*(long *)*plVar1 + 0x18);
    *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x138) + 8) + 0x1c) =
         *(undefined4 *)(*(long *)(*plVar1 + 8) + 0x1c);
    *(undefined4 *)(**(long **)(param_1 + 0x138) + 0x1c) = *(undefined4 *)(*(long *)*plVar1 + 0x1c);
    *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x138) + 8) + 0x20) =
         *(undefined4 *)(*(long *)(*plVar1 + 8) + 0x20);
    *(undefined4 *)(**(long **)(param_1 + 0x138) + 0x20) = *(undefined4 *)(*(long *)*plVar1 + 0x20);
    *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x138) + 8) + 0x24) =
         *(undefined4 *)(*(long *)(*plVar1 + 8) + 0x24);
    *(undefined4 *)(**(long **)(param_1 + 0x138) + 0x24) = *(undefined4 *)(*(long *)*plVar1 + 0x24);
    *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x138) + 8) + 0x28) =
         *(undefined4 *)(*(long *)(*plVar1 + 8) + 0x28);
    *(undefined4 *)(**(long **)(param_1 + 0x138) + 0x28) = *(undefined4 *)(*(long *)*plVar1 + 0x28);
    *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x138) + 8) + 0x2c) =
         *(undefined4 *)(*(long *)(*plVar1 + 8) + 0x2c);
    *(undefined4 *)(**(long **)(param_1 + 0x138) + 0x2c) = *(undefined4 *)(*(long *)*plVar1 + 0x2c);
    *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x138) + 8) + 0x30) =
         *(undefined4 *)(*(long *)(*plVar1 + 8) + 0x30);
    *(undefined4 *)(**(long **)(param_1 + 0x138) + 0x30) = *(undefined4 *)(*(long *)*plVar1 + 0x30);
    *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x138) + 8) + 0x34) =
         *(undefined4 *)(*(long *)(*plVar1 + 8) + 0x34);
    *(undefined4 *)(**(long **)(param_1 + 0x138) + 0x34) = *(undefined4 *)(*(long *)*plVar1 + 0x34);
    *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x138) + 8) + 0x38) =
         *(undefined4 *)(*(long *)(*plVar1 + 8) + 0x38);
    *(undefined4 *)(**(long **)(param_1 + 0x138) + 0x38) = *(undefined4 *)(*(long *)*plVar1 + 0x38);
    *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x138) + 8) + 0x3c) =
         *(undefined4 *)(*(long *)(*plVar1 + 8) + 0x3c);
    *(undefined4 *)(**(long **)(param_1 + 0x138) + 0x3c) = *(undefined4 *)(*(long *)*plVar1 + 0x3c);
  }
  return;
}


