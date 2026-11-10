/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0225544c; name: FUN_0225544c
 */


void FUN_0225544c(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  ulong uVar7;
  void *__s;
  long lVar8;
  
  lVar2 = *(long *)(param_1 + 0x350);
  __s = *(void **)(lVar2 + 0x30);
  lVar8 = *(long *)(*(long *)(param_1 + 0x348) + 0x30);
  FUN_01515e30(lVar2,lVar2);
  FUN_01515e30(*(undefined8 *)(param_1 + 0x348),*(undefined8 *)(param_1 + 0x348));
  uVar1 = FUN_0196c63c(*(undefined8 *)(param_1 + 0x350));
  uVar3 = FUN_0196c63c(*(undefined8 *)(param_1 + 0x348));
  puVar5 = (undefined2 *)(lVar8 + (uVar3 & 0xffffffff) * 2);
  if (uVar1 != 0) {
    uVar7 = (ulong)uVar1;
    uVar3 = uVar7 & 3;
    if (uVar7 - 1 < 3) {
      lVar2 = 0;
    }
    else {
      lVar2 = 0;
      puVar4 = (undefined2 *)((long)__s + 4);
      do {
        *puVar5 = puVar4[-2];
        puVar5[1] = puVar4[-1];
        puVar5[2] = *puVar4;
        puVar6 = puVar4 + 1;
        lVar2 = lVar2 + -4;
        puVar4 = puVar4 + 4;
        puVar5[3] = *puVar6;
        puVar5 = puVar5 + 4;
      } while (-lVar2 != (uVar7 & 0xfffffffc));
      lVar2 = -lVar2;
    }
    if ((uVar1 & 3) != 0) {
      puVar4 = puVar5;
      puVar6 = (undefined2 *)((long)__s + lVar2 * 2);
      do {
        uVar3 = uVar3 - 1;
        puVar5 = puVar4 + 1;
        *puVar4 = *puVar6;
        puVar4 = puVar5;
        puVar6 = puVar6 + 1;
      } while (uVar3 != 0);
    }
  }
  *puVar5 = 0;
  memset(__s,0,0x100);
  FUN_01515e30(*(undefined8 *)(param_1 + 0x348),*(undefined8 *)(param_1 + 0x348));
  return;
}


