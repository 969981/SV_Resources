/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018c66e4; name: FUN_018c66e4
 */


void FUN_018c66e4(long param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ushort local_c;
  
  puVar2 = (undefined8 *)(param_1 + 0xbbc0);
  if (param_2 == 1) {
    puVar2 = (undefined8 *)(param_1 + 0xbbe8);
  }
  else if (param_2 == 2) {
    puVar2 = (undefined8 *)(param_1 + 0xbbd4);
  }
  else if (param_2 != 3) {
    puVar2 = (undefined8 *)0x0;
  }
  *puVar2 = *(undefined8 *)((long)puVar2 + 4);
  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)((long)puVar2 + 0xc);
  *(undefined4 *)((long)puVar2 + 0xc) = *(undefined4 *)(puVar2 + 2);
  *(undefined4 *)(puVar2 + 2) = 0;
  if (param_2 == 1) {
    lVar1 = 0xbcec;
  }
  else if (param_2 == 2) {
    lVar1 = 0xbc74;
  }
  else {
    if (param_2 != 3) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_018c6730;
    }
    lVar1 = 0xbbfc;
  }
  puVar2 = (undefined8 *)(param_1 + lVar1);
LAB_018c6730:
  *puVar2 = puVar2[3];
  puVar2[1] = puVar2[4];
  puVar2[2] = puVar2[5];
  puVar2[3] = puVar2[6];
  puVar2[4] = puVar2[7];
  puVar2[5] = puVar2[8];
  puVar2[6] = puVar2[9];
  puVar2[7] = puVar2[10];
  puVar2[8] = puVar2[0xb];
  puVar2[9] = puVar2[0xc];
  puVar2[10] = puVar2[0xd];
  puVar2[0xb] = puVar2[0xe];
  *(undefined1 *)(puVar2 + 0xd) = 0;
  puVar2[0xc] = 0;
  *(undefined4 *)((long)puVar2 + 0x6a) = 0;
  *(undefined1 *)((long)puVar2 + 0x76) = 0;
  *(ulong *)((long)puVar2 + 0x6e) = (ulong)local_c;
  return;
}


