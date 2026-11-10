/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00369ffc; name: FUN_00369ffc
 */


void FUN_00369ffc(void *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  void *pvVar6;
  ulong uVar7;
  
  uVar7 = (ulong)*(uint *)((long)param_1 + 0x60) & 0x1f;
                    /* try { // try from 0036a028 to 0036a02f has its CatchHandler @ 0036a0a4 */
  FUN_0038db40(&DAT_047f07e8 + uVar7 * 0x38);
  uVar5 = (ulong)(*(uint *)((long)param_1 + 0x60) >> 5);
  uVar3 = (&DAT_047f0818)[uVar7 * 7];
  uVar2 = 0;
  if (uVar3 != 0) {
    uVar2 = uVar5 / uVar3;
  }
  puVar1 = (undefined8 *)((&DAT_047f0808)[uVar7 * 7] + (uVar5 - uVar2 * uVar3) * 8);
  do {
    puVar4 = puVar1;
    pvVar6 = (void *)*puVar4;
    puVar1 = (undefined8 *)((long)pvVar6 + 0x68);
  } while (pvVar6 != param_1);
  *puVar4 = *puVar1;
  (&DAT_047f0810)[uVar7 * 7] = (&DAT_047f0810)[uVar7 * 7] + -1;
                    /* try { // try from 0036a084 to 0036a08b has its CatchHandler @ 0036a0a0 */
  FUN_0038db60(&DAT_047f07e8 + uVar7 * 0x38);
  free(param_1);
  return;
}


