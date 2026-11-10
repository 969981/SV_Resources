/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00355290; name: FUN_00355290
 */


void FUN_00355290(void)

{
  undefined4 *puVar1;
  
  FUN_0038db40(&DAT_047ef6a8);
  for (; DAT_047ef6a0 != (undefined8 *)0x0; DAT_047ef6a0 = (undefined8 *)DAT_047ef6a0[2]) {
    while (puVar1 = (undefined4 *)*DAT_047ef6a0, puVar1 == (undefined4 *)0x0) {
      nnsocketClose(*(undefined4 *)DAT_047ef6a0[1]);
      puVar1 = (undefined4 *)DAT_047ef6a0[1];
      *puVar1 = 0xffffffff;
      nnsocketClose(puVar1[1]);
      *(undefined4 *)(DAT_047ef6a0[1] + 4) = 0xffffffff;
      DAT_047ef6a0 = (undefined8 *)DAT_047ef6a0[2];
      if (DAT_047ef6a0 == (undefined8 *)0x0) goto LAB_00355328;
    }
    if (puVar1[0xd] == 0) {
      nnsocketClose(*puVar1);
    }
    *(undefined4 *)*DAT_047ef6a0 = 0xffffffff;
  }
LAB_00355328:
  FUN_0038db60(&DAT_047ef6a8);
  return;
}


