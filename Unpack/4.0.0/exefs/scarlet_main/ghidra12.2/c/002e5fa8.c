/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002e5fa8; name: FUN_002e5fa8
 */


undefined8 FUN_002e5fa8(char *param_1,byte *param_2,byte *param_3,undefined8 *param_4)

{
  char *pcVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined2 *puVar4;
  byte *pbVar5;
  undefined4 uVar6;
  ulong uVar7;
  char *pcVar8;
  byte *pbVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  
  if ((*param_2 & 1) == 0) {
    param_2[0] = 0;
    param_2[1] = 0;
  }
  else {
    **(undefined1 **)(param_2 + 0x10) = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
  }
  *param_3 = 0;
  *param_4 = 0;
  if (*param_1 == '\x05') {
    uVar2 = *(ushort *)(param_1 + 6);
    uVar7 = (ulong)uVar2;
    if (uVar7 != 0) {
      uVar11 = 0;
      pcVar1 = param_1 + 8;
      lVar12 = -8;
      do {
        pcVar8 = pcVar1;
        if (uVar2 != 1) {
          pcVar8 = *(char **)pcVar1;
        }
        if (**(char **)(pcVar8 + uVar11 * 8) != '\x12') {
          uVar10 = (uint)uVar11;
          if (uVar10 == 0) {
            return 0;
          }
          pcVar8 = pcVar1;
          if (uVar2 != 1) {
            pcVar8 = *(char **)pcVar1;
          }
          pbVar9 = *(byte **)(pcVar8 + uVar11 * 8);
          if (1 < *pbVar9 - 3) {
            return 0;
          }
          if (uVar10 + 1 < (uint)uVar2) {
            while( true ) {
              uVar11 = uVar11 + 1;
              pcVar8 = pcVar1;
              if (1 < (uint)uVar7) {
                pcVar8 = *(char **)pcVar1;
              }
              if (uVar7 <= uVar11) break;
              FUN_002e4590(*(undefined8 *)(pcVar8 + uVar11 * 8));
              uVar7 = (ulong)*(ushort *)(param_1 + 6);
            }
            puVar4 = (undefined2 *)
                     FUN_002e4f48(5,(long)pcVar8 - lVar12,~uVar10 + (uint)uVar7,
                                  *(undefined2 *)(param_1 + 2),0);
          }
          else {
            uVar3 = *(undefined2 *)(param_1 + 2);
            puVar4 = (undefined2 *)FUN_0049e770(PTR_FUN_047cba38,0x28);
            if (puVar4 != (undefined2 *)0x0) {
              puVar4[1] = uVar3;
              *puVar4 = 2;
              puVar4[2] = 1;
              puVar4[0x13] = 0;
              *(undefined8 *)(puVar4 + 7) = 0;
              *(undefined8 *)(puVar4 + 3) = 0;
              *(undefined8 *)(puVar4 + 0xf) = 0;
              *(undefined8 *)(puVar4 + 0xb) = 0;
            }
          }
          *param_4 = puVar4;
          if (*pbVar9 == 3) {
            pbVar5 = pbVar9 + 0x18;
            uVar6 = 1;
          }
          else {
            pbVar5 = *(byte **)(pbVar9 + 0x20);
            uVar6 = *(undefined4 *)(pbVar9 + 0x18);
          }
          FUN_002e5dc0(*(ushort *)(pbVar9 + 2) >> 5 & 1,pbVar5,uVar6,param_2);
          *param_3 = pbVar9[2] & 1;
          return 1;
        }
        uVar11 = uVar11 + 1;
        lVar12 = lVar12 + -8;
      } while (uVar11 < uVar7);
    }
  }
  return 0;
}


