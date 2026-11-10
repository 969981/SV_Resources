/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034a0f60; name: FUN_034a0f60
 */


/* WARNING: Control flow encountered bad instruction data */

undefined8 * FUN_034a0f60(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  uint uVar11;
  
  puVar7 = PTR_DAT_047e2fd0;
  uVar4 = *(uint *)(param_1 + 1);
  uVar11 = *(uint *)((long)param_1 + 0xc);
  if (uVar11 <= uVar4) {
    iVar1 = uVar11 + (uVar11 >> 1);
    if (uVar11 == 0) {
      iVar1 = 1;
    }
    uVar11 = iVar1 + uVar11;
    lVar8 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,(ulong)uVar11 * 0xc0);
    if (lVar8 == 0) {
      return (undefined8 *)0x0;
    }
    lVar10 = *param_1;
    if ((lVar10 != 0) && (lVar10 != lVar8)) {
      if (uVar4 != 0) {
        lVar10 = 0;
        do {
          puVar9 = (undefined8 *)(lVar8 + lVar10);
          *puVar9 = 0xffffffffffffffff;
          puVar9[6] = 0xffff3f800000;
          puVar9[7] = 0x3f800000;
          puVar9[4] = 0;
          puVar9[5] = 0x3f80000000000000;
          puVar9[1] = 0;
          *(undefined1 *)((long)puVar9 + 0x54) = 1;
          *(undefined4 *)(puVar9 + 10) = 0;
          *(undefined1 *)(puVar9 + 0x12) = 0;
          *(undefined4 *)(puVar9 + 0xf) = 0;
          *(undefined4 *)(puVar9 + 0x15) = 0;
          *(undefined4 *)(puVar9 + 0x16) = 0;
          puVar9[0x17] = 0;
          puVar9[0xb] = 0x3f8000003f800000;
          puVar9[0xc] = 0;
          puVar9[2] = 0x3f800000;
          puVar9[3] = 0x3f800000;
          puVar9[8] = 0;
          puVar9[9] = 0x3f800000;
          puVar9[0x10] = 0;
          puVar9[0x11] = 0;
          puVar9[0xd] = 0;
          puVar9[0xe] = 0;
          puVar9[0x13] = 0;
          puVar9[0x14] = 0x2b00000000;
          puVar2 = (undefined8 *)(*param_1 + lVar10);
          *puVar9 = *puVar2;
          memcpy(puVar9 + 1,puVar2 + 1,0x50);
          puVar9[0xb] = puVar2[0xb];
          if (puVar9[0xd] != 0) {
            *(undefined4 *)(puVar9 + 0xe) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          puVar9[0xd] = puVar2[0xd];
          puVar9[0xc] = puVar2[0xc];
          *(undefined4 *)(puVar9 + 0xe) = *(undefined4 *)(puVar2 + 0xe);
          *(undefined4 *)((long)puVar9 + 0x74) = *(undefined4 *)((long)puVar2 + 0x74);
          puVar2[0xd] = 0;
          puVar2[0xe] = 0;
          *(undefined4 *)(puVar9 + 0xf) = *(undefined4 *)(puVar2 + 0xf);
          if ((puVar9[0x11] != 0) && (*(char *)(puVar9 + 0x12) != '\0')) {
            (**(code **)(*(long *)puVar9[0x10] + 0x18))();
            *(undefined1 *)(puVar9 + 0x12) = 0;
          }
          puVar9[0x11] = 0;
          puVar9[0x11] = puVar2[0x11];
          puVar9[0x10] = puVar2[0x10];
          puVar2[0x11] = 0;
          *(undefined1 *)(puVar9 + 0x12) = *(undefined1 *)(puVar2 + 0x12);
          uVar6 = *(undefined4 *)(puVar2 + 0x15);
          uVar5 = puVar2[0x14];
          *(undefined1 *)(puVar2 + 0x12) = 0;
          puVar9[0x13] = puVar2[0x13];
          puVar9[0x14] = uVar5;
          *(undefined4 *)(puVar9 + 0x15) = uVar6;
          puVar2[0x13] = 0;
          *(undefined8 *)((long)puVar2 + 0xa4) = 0x2b;
          *(undefined4 *)(puVar9 + 0x16) = *(undefined4 *)(puVar2 + 0x16);
          if (puVar9[0x17] != 0) {
            (**(code **)(puVar7 + 0x30))(0);
          }
          puVar9[0x17] = puVar2[0x17];
          puVar2[0x17] = 0;
          lVar3 = *param_1 + lVar10;
          if (*(long *)(lVar3 + 0xb8) != 0) {
            (**(code **)(puVar7 + 0x30))(0);
            *(undefined8 *)(lVar3 + 0xb8) = 0;
          }
          if (*(long *)(lVar3 + 0x68) != 0) {
            *(undefined4 *)(lVar3 + 0x70) = 0;
            (**(code **)(**(long **)(lVar3 + 0x60) + 0x18))();
            *(undefined8 *)(lVar3 + 0x68) = 0;
            *(undefined4 *)(lVar3 + 0x74) = 0;
          }
          if ((*(long *)(lVar3 + 0x88) != 0) && (*(char *)(lVar3 + 0x90) != '\0')) {
            (**(code **)(**(long **)(lVar3 + 0x80) + 0x18))();
            *(undefined1 *)(lVar3 + 0x90) = 0;
          }
          lVar10 = lVar10 + 0xc0;
          *(undefined8 *)(lVar3 + 0x88) = 0;
        } while ((ulong)uVar4 * 0xc0 != lVar10);
        lVar10 = *param_1;
      }
      (**(code **)(puVar7 + 0x30))(0,lVar10);
    }
    *param_1 = lVar8;
    *(uint *)((long)param_1 + 0xc) = uVar11;
  }
  if (uVar4 < uVar11) {
    uVar11 = *(uint *)(param_1 + 1);
    lVar8 = *param_1;
    *(uint *)(param_1 + 1) = uVar11 + 1;
    puVar9 = (undefined8 *)(lVar8 + (ulong)uVar11 * 0xc0);
    if (lVar8 != 0) {
      *puVar9 = 0xffffffffffffffff;
      lVar8 = lVar8 + (ulong)uVar11 * 0xc0;
      *(undefined8 *)(lVar8 + 0x28) = 0x3f80000000000000;
      *(undefined8 *)(lVar8 + 0x30) = 0xffff3f800000;
      *(undefined8 *)(lVar8 + 8) = 0;
      *(undefined8 *)(lVar8 + 0x10) = 0x3f800000;
      *(undefined8 *)(lVar8 + 0x18) = 0x3f800000;
      *(undefined8 *)(lVar8 + 0x20) = 0;
      *(undefined8 *)(lVar8 + 0x48) = 0x3f800000;
      *(undefined8 *)(lVar8 + 0x38) = 0x3f800000;
      *(undefined8 *)(lVar8 + 0x40) = 0;
      *(undefined1 *)(lVar8 + 0x54) = 1;
      *(undefined4 *)(lVar8 + 0x50) = 0;
      *(undefined1 *)(lVar8 + 0x90) = 0;
      *(undefined4 *)(lVar8 + 0x78) = 0;
      *(undefined4 *)(lVar8 + 0xa8) = 0;
      *(undefined4 *)(lVar8 + 0xb0) = 0;
      *(undefined8 *)(lVar8 + 0xb8) = 0;
      *(undefined8 *)(lVar8 + 0x68) = 0;
      *(undefined8 *)(lVar8 + 0x70) = 0;
      *(undefined8 *)(lVar8 + 0x58) = 0x3f8000003f800000;
      *(undefined8 *)(lVar8 + 0x60) = 0;
      *(undefined8 *)(lVar8 + 0x80) = 0;
      *(undefined8 *)(lVar8 + 0x88) = 0;
      *(undefined8 *)(lVar8 + 0x98) = 0;
      *(undefined8 *)(lVar8 + 0xa0) = 0x2b00000000;
    }
  }
  else {
    puVar9 = (undefined8 *)0x0;
  }
  return puVar9;
}


