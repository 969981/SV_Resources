/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0053ecc8; name: FUN_0053ecc8
 */


void FUN_0053ecc8(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong *puVar3;
  undefined1 auStack_40 [16];
  undefined8 local_30;
  int local_24;
  
  if (*param_1 == 0) {
    lVar1 = FUN_0049e770(PTR_FUN_047cba38,0x28);
    if (lVar1 != 0) {
                    /* try { // try from 0053ecfc to 0053ed07 has its CatchHandler @ 0053ed9c */
      FUN_0057f7dc(lVar1,0);
    }
    *param_1 = lVar1;
  }
                    /* try { // try from 0053ed0c to 0053ed17 has its CatchHandler @ 0053eda0 */
  FUN_00267c98(auStack_40,0);
  if (local_24 != 3) {
                    /* try { // try from 0053ed24 to 0053ed7b has its CatchHandler @ 0053eda4 */
    FUN_002679fc(auStack_40);
    local_24 = 3;
  }
  lVar1 = *param_1;
  local_30 = param_2;
  if (*(int *)(lVar1 + 0x24) == 3) {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
  }
  else {
    FUN_0057f700(lVar1);
    *(undefined4 *)(lVar1 + 0x24) = 3;
    puVar3 = (ulong *)(*(ulong *)(lVar1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar1 + 8) & 1) != 0) {
      puVar3 = (ulong *)*puVar3;
    }
    uVar2 = FUN_0026ae18(puVar3);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  FUN_002696a0(uVar2,auStack_40);
  FUN_00267ec4(auStack_40);
  return;
}


