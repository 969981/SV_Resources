/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003b8f50; name: FUN_003b8f50
 */


undefined8 FUN_003b8f50(int *param_1,long param_2)

{
  void *__s;
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  size_t __n;
  code *pcVar5;
  uint local_34;
  
  iVar1 = *param_1;
  if (iVar1 < 0xfefd) {
    if ((4 < iVar1 - 0x300U) && (iVar1 != 0x100)) goto LAB_003b9068;
  }
  else if ((iVar1 != 0xfeff) && (iVar1 != 0xfefd)) {
LAB_003b9068:
    uVar2 = 0x103;
    uVar3 = 0x12a;
    goto LAB_003b90cc;
  }
  *(undefined8 *)(param_2 + 0x150) = 0x20;
  if (param_1[0x1d0] != 0) {
    *(undefined8 *)(param_2 + 0x150) = 0;
    return 1;
  }
  FUN_0047e5c0(*(undefined8 *)(param_1 + 0x654));
  FUN_0047e5c0(*(undefined8 *)(*(long *)(param_1 + 0x21e) + 0x378));
  pcVar5 = *(code **)(param_1 + 0x17c);
  if (pcVar5 == (code *)0x0) {
    pcVar4 = *(code **)(*(long *)(param_1 + 0x21e) + 0x198);
    pcVar5 = (code *)&LAB_003b9100;
    if (pcVar4 != (code *)0x0) {
      pcVar5 = pcVar4;
    }
  }
  FUN_0047e600(*(undefined8 *)(*(long *)(param_1 + 0x21e) + 0x378));
  FUN_0047e600(*(undefined8 *)(param_1 + 0x654));
  __n = *(size_t *)(param_2 + 0x150);
  __s = (void *)(param_2 + 0x158);
  memset(__s,0,__n);
  local_34 = (uint)__n;
  iVar1 = (*pcVar5)(param_1,__s,&local_34);
  if (iVar1 == 0) {
    uVar2 = 0x12d;
    uVar3 = 0x151;
  }
  else if ((local_34 == 0) || (*(ulong *)(param_2 + 0x150) < (ulong)local_34)) {
    uVar2 = 0x12f;
    uVar3 = 0x15b;
  }
  else {
    *(ulong *)(param_2 + 0x150) = (ulong)local_34;
    iVar1 = FUN_003b2ed0(param_1,__s);
    if (iVar1 == 0) {
      return 1;
    }
    uVar2 = 0x12e;
    uVar3 = 0x163;
  }
LAB_003b90cc:
  FUN_003c3950(param_1,0x50,0x223,uVar2,"external/openssl/ssl/ssl_sess.c",uVar3);
  return 0;
}


