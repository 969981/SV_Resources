/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00550cac; name: FUN_00550cac
 */


void FUN_00550cac(byte *param_1,long *param_2)

{
  undefined *puVar1;
  byte bVar2;
  char *pcVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_c8 [32];
  undefined *local_a8;
  undefined *puStack_a0;
  undefined8 ***local_98;
  undefined8 ***pppuStack_90;
  undefined1 auStack_80 [24];
  undefined8 local_68;
  undefined **local_40;
  undefined8 uStack_38;
  long local_28;
  
  lVar6 = *param_2;
  if (*(char *)(lVar6 + 0x38) == '\0') {
    puVar1 = PTR_DAT_047cbb30 + 0x10;
    local_98 = &local_98;
    local_40 = (undefined **)0x0;
    uStack_38 = 0;
    puStack_a0 = PTR_DAT_047cbb38 + 0x10;
    local_a8 = puVar1;
    pppuStack_90 = local_98;
    (**(code **)(**(long **)(lVar6 + 0x20) + 0x10))(*(long **)(lVar6 + 0x20),auStack_80);
    local_40 = &puStack_a0;
    thunk_FUN_006c4e40(&local_a8);
    local_a8 = puVar1;
    FUN_006c4274(&puStack_a0);
    pcVar3 = (char *)(**(code **)(**(long **)(lVar6 + 0x20) + 0x38))();
    if (*pcVar3 == '\0') {
      if (*(char *)(lVar6 + 0x50) == '\0') {
        *(undefined1 *)(lVar6 + 0x50) = 1;
        plVar4 = *(long **)(*(long *)(lVar6 + 0x30) + 0x20);
                    /* try { // try from 00550e44 to 00550e4b has its CatchHandler @ 00550e74 */
        (**(code **)(*plVar4 + 0x40))(plVar4,0);
      }
      FUN_0057444c(&local_a8,0);
      *param_1 = 0;
      FUN_005508ec(param_1 + 8,&local_a8);
      FUN_005744a0(&local_a8);
      return;
    }
    *(undefined1 *)(lVar6 + 0x38) = 1;
  }
  FUN_001fed6c(&local_a8,lVar6 + 0x40);
                    /* try { // try from 00550d54 to 00550d5f has its CatchHandler @ 00550e8c */
  FUN_0057444c(auStack_c8,0);
                    /* try { // try from 00550d70 to 00550d77 has its CatchHandler @ 00550e7c */
  (**(code **)(**(long **)(lVar6 + 0x10) + 0x10))(*(long **)(lVar6 + 0x10),auStack_c8,local_68);
  bVar2 = FUN_001feef4(&local_a8);
  if ((bVar2 & 1) == 0) {
    if (*(char *)(lVar6 + 0x50) == '\0') {
      *(undefined1 *)(lVar6 + 0x50) = 1;
      plVar4 = *(long **)(*(long *)(lVar6 + 0x30) + 0x20);
                    /* try { // try from 00550de4 to 00550deb has its CatchHandler @ 00550e78 */
      (**(code **)(*plVar4 + 0x40))(plVar4,0);
    }
  }
  else {
    **(undefined1 **)(lVar6 + 0x58) = 1;
    lVar5 = *(long *)(lVar6 + 0x68);
    if (lVar5 != 0) {
      local_28 = std::chrono::system_clock::now();
      local_28 = local_28 + *(long *)(lVar6 + 0x78) * 1000000;
      FUN_002529a4(lVar5,&local_28);
    }
  }
  *param_1 = bVar2 & 1;
  FUN_005508ec(param_1 + 8,auStack_c8);
  FUN_005744a0(auStack_c8);
  FUN_001ff1dc(&local_a8);
  return;
}


