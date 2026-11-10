/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005c90d0; name: FUN_005c90d0
 */


void FUN_005c90d0(byte *param_1,long *param_2)

{
  undefined *puVar1;
  byte bVar2;
  char *pcVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_f8 [64];
  undefined8 local_b8;
  undefined *local_a8;
  undefined *puStack_a0;
  undefined8 ***local_98;
  undefined8 ***pppuStack_90;
  undefined1 auStack_80 [64];
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
                    /* try { // try from 005c9268 to 005c926f has its CatchHandler @ 005c9298 */
        (**(code **)(*plVar4 + 0x40))(plVar4,0);
      }
      FUN_0060ab98(&local_a8,0);
      *param_1 = 0;
      FUN_005c308c(param_1 + 8,&local_a8);
      FUN_0060ac04(&local_a8);
      return;
    }
    *(undefined1 *)(lVar6 + 0x38) = 1;
  }
  FUN_001fed6c(auStack_f8,lVar6 + 0x40);
                    /* try { // try from 005c9178 to 005c9183 has its CatchHandler @ 005c92b0 */
  FUN_0060ab98(&local_a8,0);
                    /* try { // try from 005c9194 to 005c919b has its CatchHandler @ 005c92a0 */
  (**(code **)(**(long **)(lVar6 + 0x10) + 0x10))(*(long **)(lVar6 + 0x10),&local_a8,local_b8);
  bVar2 = FUN_001feef4(auStack_f8);
  if ((bVar2 & 1) == 0) {
    if (*(char *)(lVar6 + 0x50) == '\0') {
      *(undefined1 *)(lVar6 + 0x50) = 1;
      plVar4 = *(long **)(*(long *)(lVar6 + 0x30) + 0x20);
                    /* try { // try from 005c9208 to 005c920f has its CatchHandler @ 005c929c */
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
  FUN_005c308c(param_1 + 8,&local_a8);
  FUN_0060ac04(&local_a8);
  FUN_001ff1dc(auStack_f8);
  return;
}


