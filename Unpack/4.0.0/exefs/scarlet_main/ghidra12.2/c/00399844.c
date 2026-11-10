/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00399844; name: thunk_FUN_00399848
 */


long thunk_FUN_00399848(void)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puStack_18;
  
  if (((DAT_047f15f8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_047f15f8), iVar2 != 0)) {
    lVar3 = FUN_0039a0cc(&DAT_03c16be5);
    FUN_0039ad2c(&puStack_18);
    puVar1 = puStack_18;
    puStack_18 = (undefined8 *)0x0;
    puVar4 = *(undefined8 **)(lVar3 + 0x18);
    *(undefined8 **)(lVar3 + 0x18) = puVar1;
    if (puVar4 == (undefined8 *)0x0) {
      puStack_18 = (undefined8 *)0x0;
    }
    else {
      (**(code **)*puVar4)(puVar4);
      FUN_0049e790(PTR_LAB_047cba48,puVar4);
      puVar1 = puStack_18;
      puStack_18 = (undefined8 *)0x0;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1);
        FUN_0049e790(PTR_LAB_047cba48,puVar1);
      }
    }
    DAT_047f15f0 = lVar3;
    __cxa_guard_release(&DAT_047f15f8);
  }
  return DAT_047f15f0;
}


