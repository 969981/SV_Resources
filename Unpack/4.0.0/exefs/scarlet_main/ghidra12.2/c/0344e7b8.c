/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0344e7b8; name: FUN_0344e7b8
 */


void FUN_0344e7b8(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  
  puVar1 = PTR_DAT_047e2fd0;
  if (*(long *)(param_1 + 0x20) != 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    (**(code **)(puVar1 + 0x30))(0);
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    (**(code **)(puVar1 + 0x30))(0);
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    *(undefined4 *)(param_1 + 0x98) = 0;
    (**(code **)(puVar1 + 0x30))(0);
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  if (*(long *)(param_1 + 200) != 0) {
    *(undefined4 *)(param_1 + 0xd0) = 0;
    (**(code **)(puVar1 + 0x30))(0);
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xd4) = 0;
  }
  if (*(long *)(param_1 + 0x100) != 0) {
    *(undefined4 *)(param_1 + 0x108) = 0;
    (**(code **)(puVar1 + 0x30))(0);
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0;
  }
  if (*(long *)(param_1 + 0x138) != 0) {
    *(undefined4 *)(param_1 + 0x140) = 0;
    (**(code **)(puVar1 + 0x30))(0);
    *(undefined8 *)(param_1 + 0x138) = 0;
    *(undefined4 *)(param_1 + 0x144) = 0;
  }
  if (*(long *)(param_1 + 0x170) != 0) {
    *(undefined4 *)(param_1 + 0x178) = 0;
    (**(code **)(puVar1 + 0x30))(0);
    *(undefined8 *)(param_1 + 0x170) = 0;
    *(undefined4 *)(param_1 + 0x17c) = 0;
  }
  if (*(long *)(param_1 + 0x1a8) != 0) {
    *(undefined4 *)(param_1 + 0x1b0) = 0;
    (**(code **)(puVar1 + 0x30))(0);
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    *(undefined4 *)(param_1 + 0x1b4) = 0;
  }
  if (*(long *)(param_1 + 0x1e0) != 0) {
    *(undefined4 *)(param_1 + 0x1e8) = 0;
    (**(code **)(puVar1 + 0x30))(0);
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    *(undefined4 *)(param_1 + 0x1ec) = 0;
  }
  if (*(long *)(param_1 + 0x218) != 0) {
    *(undefined4 *)(param_1 + 0x220) = 0;
    (**(code **)(puVar1 + 0x30))(0);
    *(undefined8 *)(param_1 + 0x218) = 0;
    *(undefined4 *)(param_1 + 0x224) = 0;
  }
  if (*(long *)(param_1 + 0x250) != 0) {
    *(undefined4 *)(param_1 + 600) = 0;
    (**(code **)(puVar1 + 0x30))(0);
    *(undefined8 *)(param_1 + 0x250) = 0;
    *(undefined4 *)(param_1 + 0x25c) = 0;
  }
  if (*(long *)(param_1 + 0x288) != 0) {
    *(undefined4 *)(param_1 + 0x290) = 0;
    (**(code **)(puVar1 + 0x30))(0);
    *(undefined8 *)(param_1 + 0x288) = 0;
    *(undefined4 *)(param_1 + 0x294) = 0;
  }
  if (*(long *)(param_1 + 0x2c0) != 0) {
    *(undefined4 *)(param_1 + 0x2c8) = 0;
    (**(code **)(puVar1 + 0x30))(0);
    *(undefined8 *)(param_1 + 0x2c0) = 0;
    *(undefined4 *)(param_1 + 0x2cc) = 0;
  }
  do {
    if (*(int *)(param_1 + 0x308) == 0) {
      if (*(long *)(param_1 + 0x2f8) != 0) {
        *(undefined4 *)(param_1 + 0x300) = 0;
        (**(code **)(puVar1 + 0x30))(0);
        *(undefined8 *)(param_1 + 0x2f8) = 0;
        *(undefined4 *)(param_1 + 0x304) = 0;
      }
      return;
    }
    if (*(int *)(param_1 + 0x300) == 0) {
LAB_0344e9a8:
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = (long *)**(long **)(param_1 + 0x2f8);
      if (plVar2 == (long *)0x0) {
        uVar3 = 0;
        do {
          if (*(int *)(param_1 + 0x300) - 1 == uVar3) goto LAB_0344e9a8;
          uVar3 = uVar3 + 1;
          plVar2 = (long *)(*(long **)(param_1 + 0x2f8))[uVar3 & 0xffffffff];
        } while (plVar2 == (long *)0x0);
      }
    }
    (**(code **)(*plVar2 + 0x18))();
  } while( true );
}


