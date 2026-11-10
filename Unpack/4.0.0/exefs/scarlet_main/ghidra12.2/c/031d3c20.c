/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031d3c20; name: FUN_031d3c20
 */


void FUN_031d3c20(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x1000b8);
  if (lVar3 == 0) {
    lVar3 = FUN_00e5d3b4();
    *(long *)(lVar1 + 0x1000b8) = lVar3;
  }
  lVar4 = *(long *)(lVar3 + 0x3e0);
  if (lVar4 != 0) {
    lVar2 = *(long *)(lVar4 + 8);
    if ((lVar2 != 0) && (*(char *)(lVar4 + 0x40) != '\0')) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(3,lVar2,0);
      lVar3 = *(long *)(lVar1 + 0x1000b8);
    }
    *(undefined1 *)(lVar4 + 0x40) = 0;
    *(undefined8 *)(lVar4 + 0x18) = 0;
    *(undefined8 *)(lVar4 + 0x20) = 0;
    *(long *)(lVar4 + 8) = 0;
    *(undefined8 *)(lVar4 + 0x10) = 0;
    lVar4 = (long)DAT_048840e8;
    if (lVar3 == 0) {
      lVar3 = FUN_00e5d3b4();
      *(long *)(lVar1 + 0x1000b8) = lVar3;
    }
    *(undefined8 *)(lVar3 + lVar4 * 8 + 1000) = 0;
    lVar3 = *(long *)(lVar1 + 0x1000b8);
  }
  if (lVar3 == 0) {
    lVar3 = FUN_00e5d3b4();
    *(long *)(lVar1 + 0x1000b8) = lVar3;
  }
  puVar5 = *(undefined8 **)(lVar3 + 0x3e0);
  *(undefined1 *)(puVar5 + 8) = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0xffffffffffffffff;
  puVar5[6] = 0;
  puVar5[7] = 0;
  lVar2 = (long)DAT_048840e8;
  lVar4 = lVar3;
  if (lVar3 == 0) {
    lVar4 = FUN_00e5d3b4();
    *(long *)(lVar1 + 0x1000b8) = lVar4;
  }
  *(undefined8 *)(lVar4 + lVar2 * 8 + 1000) = 0;
  *(undefined1 *)(puVar5 + 8) = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *(undefined4 *)(puVar5 + 5) = 0xffffffff;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[7] = *(undefined8 *)(lVar3 + 0x3d8);
  *puVar5 = DAT_048840b8;
  return;
}


