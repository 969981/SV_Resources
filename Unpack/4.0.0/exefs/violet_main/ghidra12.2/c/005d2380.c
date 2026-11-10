/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005d2380; name: FUN_005d2380
 */


void FUN_005d2380(byte *param_1,long *param_2)

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
                    /* try { // try from 005d2518 to 005d251f has its CatchHandler @ 005d2548 */
        (**(code **)(*plVar4 + 0x40))(plVar4,0);
      }
      FUN_00606d78(&local_a8,0);
      *param_1 = 0;
      FUN_005ce2ac(param_1 + 8,&local_a8);
      FUN_00606de0(&local_a8);
      return;
    }
    *(undefined1 *)(lVar6 + 0x38) = 1;
  }
  FUN_001fed6c(auStack_f8,lVar6 + 0x40);
                    /* try { // try from 005d2428 to 005d2433 has its CatchHandler @ 005d2560 */
  FUN_00606d78(&local_a8,0);
                    /* try { // try from 005d2444 to 005d244b has its CatchHandler @ 005d2550 */
  (**(code **)(**(long **)(lVar6 + 0x10) + 0x10))(*(long **)(lVar6 + 0x10),&local_a8,local_b8);
  bVar2 = FUN_001feef4(auStack_f8);
  if ((bVar2 & 1) == 0) {
    if (*(char *)(lVar6 + 0x50) == '\0') {
      *(undefined1 *)(lVar6 + 0x50) = 1;
      plVar4 = *(long **)(*(long *)(lVar6 + 0x30) + 0x20);
                    /* try { // try from 005d24b8 to 005d24bf has its CatchHandler @ 005d254c */
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
  FUN_005ce2ac(param_1 + 8,&local_a8);
  FUN_00606de0(&local_a8);
  FUN_001ff1dc(auStack_f8);
  return;
}


