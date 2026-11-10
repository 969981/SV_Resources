/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0038bad0; name: FUN_0038bad0
 */


undefined8 * FUN_0038bad0(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar5 = (ulong)*(uint *)(param_1 + 0x28);
  do {
    uVar5 = (ulong)(uint)((int)uVar5 << 1);
    uVar2 = param_2;
    if (param_2 <= uVar5) {
      uVar2 = uVar5;
    }
    uVar5 = uVar2 + 0x10;
    puVar3 = (undefined8 *)
             (*(code *)**(undefined8 **)(param_1 + 0x20))
                       (*(undefined8 **)(param_1 + 0x20),0,0,uVar5);
    if (puVar3 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    *(int *)(puVar3 + 1) = (int)uVar5;
    *puVar3 = uVar4;
    *(undefined4 *)((long)puVar3 + 0xc) = 0;
    *(undefined8 **)(param_1 + 0x38) = puVar3;
    *(int *)(param_1 + 0x28) = (int)uVar5;
    if (*(long *)(param_1 + 0x40) == 0) {
      *(undefined8 **)(param_1 + 0x40) = puVar3;
    }
    *(undefined4 **)(param_1 + 0x18) = (undefined4 *)((long)puVar3 + 0xc);
    param_2 = param_2 + 0xf & 0xfffffffffffffff0;
    puVar1 = puVar3 + 2;
    *(undefined8 **)(param_1 + 8) = puVar1;
    *(ulong *)(param_1 + 0x10) = (long)puVar3 + uVar5;
  } while (uVar2 < param_2);
  *(ulong *)(param_1 + 8) = (long)puVar1 + param_2;
  return puVar1;
}


