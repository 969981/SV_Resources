/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0056b740; name: FUN_0056b740
 */


void FUN_0056b740(long *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong *puVar4;
  byte local_50;
  undefined7 uStack_4f;
  ulong local_40;
  long *plStack_38;
  
  lVar2 = FUN_0049e770(PTR_FUN_047cba38,0x20);
  if (lVar2 != 0) {
                    /* try { // try from 0056b774 to 0056b77f has its CatchHandler @ 0056b840 */
    FUN_00579bf0(lVar2,0);
  }
  uVar3 = FUN_00538b5c(param_3);
                    /* try { // try from 0056b78c to 0056b7c7 has its CatchHandler @ 0056b874 */
  FUN_00579b68(lVar2,uVar3);
  if (*(int *)(lVar2 + 0x1c) == 3) {
    uVar3 = *(undefined8 *)(lVar2 + 0x10);
  }
  else {
    FUN_005799fc(lVar2);
    *(undefined4 *)(lVar2 + 0x1c) = 3;
    puVar4 = (ulong *)(*(ulong *)(lVar2 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar2 + 8) & 1) != 0) {
      puVar4 = (ulong *)*puVar4;
    }
    uVar3 = FUN_00585b04(puVar4);
    *(undefined8 *)(lVar2 + 0x10) = uVar3;
  }
  FUN_00538e58(&local_50,param_2);
  uVar1 = (ulong)&local_50 | 1;
  if ((local_50 & 1) != 0) {
    uVar1 = local_40;
  }
                    /* try { // try from 0056b7f4 to 0056b7fb has its CatchHandler @ 0056b844 */
  FUN_0056ce34(uVar3,uVar1);
  if ((local_50 & 1) != 0) {
    (**(code **)(*plStack_38 + 0x18))
              (plStack_38,local_40,CONCAT71(uStack_4f,local_50) & 0xfffffffffffffffe,1);
  }
  *param_1 = lVar2;
  return;
}


