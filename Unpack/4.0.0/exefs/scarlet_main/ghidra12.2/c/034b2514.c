/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034b2514; name: FUN_034b2514
 */


undefined4 * FUN_034b2514(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  long *plVar4;
  
  puVar2 = PTR_DAT_047e2fd0;
  if (*(uint *)(param_1 + 1) < *(uint *)(param_1 + 2)) {
    puVar3 = (undefined4 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x98);
    if (puVar3 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    *puVar3 = 0;
    *(undefined2 *)((long)puVar3 + 0x22) = 0;
    puVar3[10] = 0;
    *(undefined2 *)(puVar3 + 0xb) = 0;
    puVar3[0x16] = 0;
    *(undefined8 *)(puVar3 + 6) = 0;
    *(undefined8 *)(puVar3 + 0x1d) = 0;
    *(undefined8 *)(puVar3 + 0x1f) = 0;
    *(undefined8 *)(puVar3 + 0x21) = 0;
    *(undefined8 *)(puVar3 + 0x23) = 0;
    puVar3[0x25] = 0;
    *(undefined8 *)(puVar3 + 2) = 0;
    *(undefined8 *)(puVar3 + 4) = 0;
    *(undefined8 *)(puVar3 + 0xc) = 0;
    *(undefined8 *)(puVar3 + 0xe) = 0;
    *(undefined8 *)(puVar3 + 0x10) = 0;
    *(undefined8 *)(puVar3 + 0x12) = 0;
    uVar1 = *(uint *)(param_1 + 1);
    if (uVar1 < *(uint *)((long)param_1 + 0xc)) {
      *(uint *)(param_1 + 1) = uVar1 + 1;
      if (*param_1 != 0) {
        *(undefined4 **)(*param_1 + (ulong)uVar1 * 8) = puVar3;
        return puVar3;
      }
      plVar4 = *(long **)(puVar3 + 4);
      if (plVar4 != (long *)0x0) {
        if (*(ushort *)(plVar4 + 2) - 1 == 0) {
          if (*plVar4 != 0) {
            *(undefined4 *)(plVar4 + 1) = 0;
            (**(code **)(puVar2 + 0x30))(0);
            *plVar4 = 0;
            *(undefined4 *)((long)plVar4 + 0xc) = 0;
          }
          (**(code **)(puVar2 + 0x30))(0,plVar4);
        }
        else {
          *(short *)(plVar4 + 2) = (short)(*(ushort *)(plVar4 + 2) - 1);
        }
      }
    }
    (**(code **)(puVar2 + 0x30))(0,puVar3);
  }
  return (undefined4 *)0x0;
}


