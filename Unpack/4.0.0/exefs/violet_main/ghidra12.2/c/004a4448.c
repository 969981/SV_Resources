/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004a4448; name: FUN_004a4448
 */


undefined8 * FUN_004a4448(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (((DAT_047f4540 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_047f4540), iVar1 != 0)) {
                    /* try { // try from 004a4484 to 004a452b has its CatchHandler @ 004a4540 */
    uVar2 = FUN_004a45b0();
    puVar3 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x48);
    if (puVar3 != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x20);
      if (puVar4 != (undefined8 *)0x0) {
        puVar4[1] = 0;
        *puVar4 = 0;
        puVar4[3] = 0;
        puVar4[2] = 0;
        *(undefined2 *)puVar4 = 1;
        *(undefined1 *)((long)puVar4 + 2) = 0;
      }
      *puVar3 = puVar4;
      puVar3[1] = uVar2;
      puVar3[2] = 0;
      puVar3[3] = 0;
      lVar5 = FUN_0049e770(PTR_FUN_047cba38,0x1f8);
      if (lVar5 != 0) {
        FUN_0049f6a4(lVar5);
      }
      puVar3[7] = 0;
      puVar3[4] = lVar5;
      *(undefined1 *)(puVar3 + 5) = 1;
      puVar3[8] = 0;
      *(undefined4 *)((long)puVar3 + 0x29) = 0;
      puVar3[6] = puVar3 + 7;
    }
    *(undefined2 *)(puVar3 + 5) = 0x100;
    FUN_0052d820(PTR_FUN_047cd730,puVar3);
    DAT_047f4538 = puVar3;
    __cxa_guard_release(&DAT_047f4540);
  }
  return DAT_047f4538;
}


