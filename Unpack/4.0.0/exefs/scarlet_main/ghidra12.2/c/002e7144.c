/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002e7144; name: FUN_002e7144
 */


void FUN_002e7144(uint *param_1)

{
  bool bVar1;
  undefined1 *puVar2;
  long lVar3;
  uint *puVar4;
  uint *puVar5;
  undefined1 *puVar6;
  long lVar7;
  
  puVar2 = (undefined1 *)
           FUN_0049e7b0(PTR_FUN_047cba38,
                        (-(*(ulong *)(param_1 + 8) >> 0x1f & 1) & 0xfffffff800000000 |
                        (*(ulong *)(param_1 + 8) & 0xffffffff) << 3) + 0x18);
  puVar6 = puVar2 + 0x18;
  *(undefined1 **)(puVar2 + 8) = puVar6;
  *(undefined4 *)(puVar2 + 0x10) = 0;
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 4) = 0;
  puVar4 = *(uint **)(param_1 + 4);
  if (puVar4 == param_1 + 6) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    while( true ) {
      *(undefined8 *)(puVar6 + lVar3 * 8) = *(undefined8 *)(puVar4 + 7);
      lVar3 = lVar3 + 1;
      puVar5 = *(uint **)(puVar4 + 2);
      if (*(uint **)(puVar4 + 2) == (uint *)0x0) {
        puVar5 = puVar4 + 4;
        bVar1 = *(uint **)*(uint **)puVar5 != puVar4;
        puVar4 = *(uint **)puVar5;
        if (bVar1) {
          do {
            lVar7 = *(long *)puVar5;
            puVar5 = (uint *)(lVar7 + 0x10);
            puVar4 = *(uint **)puVar5;
          } while (*(long *)puVar4 != lVar7);
        }
      }
      else {
        do {
          puVar4 = puVar5;
          puVar5 = *(uint **)puVar4;
        } while (*(uint **)puVar4 != (uint *)0x0);
      }
      if (puVar4 == param_1 + 6) break;
      puVar6 = *(undefined1 **)(puVar2 + 8);
    }
  }
  *(int *)(puVar2 + 0x10) = (int)lVar3;
  *(uint *)(puVar2 + 4) = param_1[2];
  *puVar2 = ((param_1[1] ^ *param_1) & 0x3ffffff) == 0;
  return;
}


