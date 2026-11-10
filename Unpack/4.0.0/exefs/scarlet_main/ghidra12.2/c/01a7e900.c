/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a7e900; name: FUN_01a7e900
 */


long FUN_01a7e900(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  byte local_8 [4];
  byte local_4 [4];
  
  FUN_01253868(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x290),param_2,local_4,local_8);
  uVar4 = (ulong)local_4[0];
  if (((uVar4 != 5) && (local_8[0] < *(byte *)(param_1 + uVar4 * 0x38 + 0x58))) &&
     (lVar5 = *(long *)(param_1 + uVar4 * 0x38 + (ulong)local_8[0] * 8 + 0x28), lVar5 != 0)) {
    puVar2 = (undefined8 *)(*(code *)**(undefined8 **)(lVar5 + 0x28))((undefined8 *)(lVar5 + 0x28));
    if (((*PTR_DAT_047d3f00 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar1 != 0)) {
      uVar3 = FUN_01b07aa4();
      *(undefined8 *)PTR_DAT_047d3f08 = uVar3;
      __cxa_guard_release(PTR_DAT_047d3f00);
    }
    if (puVar2 != (undefined8 *)0x0) {
      do {
        if (puVar2 == (undefined8 *)PTR_DAT_047d3f08) {
          return lVar5;
        }
        puVar2 = (undefined8 *)*puVar2;
      } while (puVar2 != (undefined8 *)0x0);
      return 0;
    }
  }
  return 0;
}


