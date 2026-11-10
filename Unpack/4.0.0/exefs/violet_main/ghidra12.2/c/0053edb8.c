/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0053edb8; name: FUN_0053edb8
 */


void FUN_0053edb8(long *param_1,undefined8 param_2)

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
                    /* try { // try from 0053edec to 0053edf7 has its CatchHandler @ 0053ee8c */
      FUN_0057f7dc(lVar1,0);
    }
    *param_1 = lVar1;
  }
                    /* try { // try from 0053edfc to 0053ee07 has its CatchHandler @ 0053ee90 */
  FUN_00267c98(auStack_40,0);
  if (local_24 != 3) {
                    /* try { // try from 0053ee14 to 0053ee6b has its CatchHandler @ 0053ee94 */
    FUN_002679fc(auStack_40);
    local_24 = 3;
  }
  lVar1 = *param_1;
  local_30 = param_2;
  if (*(int *)(lVar1 + 0x24) == 4) {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
  }
  else {
    FUN_0057f700(lVar1);
    *(undefined4 *)(lVar1 + 0x24) = 4;
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


