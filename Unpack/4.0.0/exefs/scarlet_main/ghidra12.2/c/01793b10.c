/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01793b10; name: FUN_01793b10
 */


void FUN_01793b10(byte *param_1)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  
  uVar2 = (ulong)DAT_0485f200;
  if ((0x1f < DAT_0485f200) || (bVar1 = *param_1, pbVar3 = param_1, bVar1 == 0)) {
    return;
  }
  do {
    pbVar3 = pbVar3 + 1;
  } while (*pbVar3 != 0);
  puVar4 = &DAT_cbf29ce484222645;
  pbVar3 = param_1;
  do {
    pbVar3 = pbVar3 + 1;
    puVar4 = (undefined1 *)(((ulong)puVar4 ^ (ulong)bVar1) * 0x100000001b3);
    bVar1 = *pbVar3;
  } while (bVar1 != 0);
  pbVar3 = &DAT_045e4c68;
  while( true ) {
    bVar1 = *pbVar3;
    puVar5 = &DAT_cbf29ce484222645;
    if (bVar1 != 0) {
      lVar6 = 1;
      puVar5 = &DAT_cbf29ce484222645;
      do {
        puVar5 = (undefined1 *)(((ulong)puVar5 ^ (ulong)bVar1) * 0x100000001b3);
        bVar1 = pbVar3[lVar6];
        lVar6 = lVar6 + 1;
      } while (bVar1 != 0);
    }
    if (puVar5 == puVar4) break;
    pbVar3 = pbVar3 + 0x44;
    if (pbVar3 == &DAT_045e54e8) {
LAB_01793bc0:
      DAT_0485f200 = DAT_0485f200 + 1;
      memcpy(&DAT_045e4c68 + uVar2 * 0x44,param_1,0x44);
      return;
    }
  }
  if (pbVar3 != &DAT_045e54e8) {
    memcpy(pbVar3,param_1,0x44);
    return;
  }
  goto LAB_01793bc0;
}


