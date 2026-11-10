/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c6754c; name: FUN_00c6754c
 */


void FUN_00c6754c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  short local_44 [2];
  short local_28 [2];
  short local_24 [2];
  
  lVar2 = *(long *)(param_1 + 0x38);
  lVar3 = *(long *)(param_1 + 0x40);
  if (lVar2 != lVar3) {
    lVar6 = 0;
    do {
      lVar1 = lVar2 + lVar6;
      if (*(long *)(lVar1 + 0x128) != 0) {
        plVar4 = (long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x30) + 0x30);
        (**(code **)(*plVar4 + 0x30))
                  (plVar4,*(undefined2 *)(lVar1 + 0x134),local_24,local_28,local_44);
        puVar5 = (undefined8 *)
                 FUN_00c4c40c(*(undefined8 *)(param_1 + 0xd8),*(undefined2 *)(lVar1 + 0x136));
        plVar4 = (long *)(*(long *)(lVar1 + 0x128) + 0x30);
        (**(code **)(*plVar4 + 0x10))
                  (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x50),
                   *(undefined8 *)(lVar1 + 0x60),*(undefined8 *)(lVar1 + 0x70),*puVar5,puVar5[2],
                   puVar5[4],puVar5[6],plVar4,(long)local_24[0],(long)local_28[0],(long)local_44[0],
                   *(undefined8 *)(lVar1 + 0xb8));
      }
      lVar6 = lVar6 + 0x140;
    } while (lVar3 - lVar2 != lVar6);
  }
  return;
}


