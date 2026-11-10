/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0033aaf0; name: FUN_0033aaf0
 */


void FUN_0033aaf0(long param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  ulong uVar7;
  
  FUN_0038db40(param_1 + 0x40);
  lVar4 = *(long *)(param_1 + 0x18);
  lVar6 = *(long *)(param_1 + 0x20);
  uVar1 = 0;
  if (lVar6 - lVar4 != 0) {
    uVar1 = (lVar6 - lVar4) * 0x20 - 1;
  }
  lVar3 = *(long *)(param_1 + 0x38);
  uVar7 = lVar3 + *(long *)(param_1 + 0x30);
  if (uVar1 == uVar7) {
                    /* try { // try from 0033ab34 to 0033ab37 has its CatchHandler @ 0033ab98 */
    FUN_0033d9a8(param_1 + 0x10);
    lVar3 = *(long *)(param_1 + 0x38);
    uVar7 = *(long *)(param_1 + 0x30) + lVar3;
    lVar4 = *(long *)(param_1 + 0x18);
    lVar6 = *(long *)(param_1 + 0x20);
  }
  if (lVar6 == lVar4) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = (undefined4 *)
             (*(long *)(lVar4 + (uVar7 >> 5 & 0x7fffffffffffff8)) + (uVar7 & 0xff) * 0x10);
  }
  uVar2 = *param_2;
  *(undefined8 *)(puVar5 + 2) = 0;
  *puVar5 = uVar2;
  *(undefined8 *)(puVar5 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_2 + 2) = 0;
  *(long *)(param_1 + 0x38) = lVar3 + 1;
                    /* try { // try from 0033ab84 to 0033ab8b has its CatchHandler @ 0033abb0 */
  FUN_0038db60(param_1 + 0x40);
  return;
}


