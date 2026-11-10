/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007f4e70; name: FUN_007f4e70
 */


void FUN_007f4e70(void *param_1,long param_2,ulong param_3)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  memset(param_1,0,4);
  for (lVar3 = *(long *)(param_2 + 0x20); lVar3 != param_2 + 0x18; lVar3 = *(long *)(lVar3 + 8)) {
    bVar1 = *(byte *)(*(long *)(lVar3 + 0x10) + 0x28);
    if ((bVar1 < 0x18) && (*(char *)(*(long *)(lVar3 + 0x10) + 0x3a) == '\x02')) {
      lVar4 = (ulong)(bVar1 >> 5) * 4;
      *(uint *)((long)param_1 + lVar4) =
           *(uint *)((long)param_1 + lVar4) | 1 << (ulong)(bVar1 & 0x1f);
    }
  }
  if ((((param_3 & 1) == 0) && (*(long *)(param_2 + 0x98) != 0)) &&
     (bVar1 = *(byte *)(*(long *)(param_2 + 0x98) + 0x28), bVar1 < 0x18)) {
    uVar2 = (ulong)(bVar1 >> 3) & 0x1c;
    *(uint *)((long)param_1 + uVar2) =
         *(uint *)((long)param_1 + uVar2) & (1 << (ulong)(bVar1 & 0x1f) ^ 0xffffffffU);
  }
  return;
}


