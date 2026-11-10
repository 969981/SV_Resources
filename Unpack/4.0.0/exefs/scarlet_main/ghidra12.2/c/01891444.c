/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01891444; name: FUN_01891444
 */


void FUN_01891444(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *param_1;
  puVar1 = (undefined4 *)FUN_01053840();
  lVar2 = nn::os::GetTlsValue(*puVar1);
  if (lVar2 != 0) {
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar3;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  }
  *param_2 = *param_3;
  param_2[1] = param_3[1];
  param_2[2] = param_3[2];
  uVar3 = param_3[3];
  param_3[3] = 0;
  param_2[3] = uVar3;
  *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_3 + 4);
  param_2[5] = param_3[5];
  param_2[6] = param_3[6];
  param_2[7] = param_3[7];
  uVar3 = param_3[8];
  param_3[8] = 0;
  param_2[8] = uVar3;
  param_2[9] = param_3[9];
  param_2[10] = param_3[10];
  param_2[0xb] = param_3[0xb];
  uVar3 = param_3[0xc];
  param_3[0xc] = 0;
  param_2[0xc] = uVar3;
  param_2[0xd] = param_3[0xd];
  param_2[0xe] = param_3[0xe];
  param_2[0xf] = param_3[0xf];
  uVar3 = param_3[0x10];
  param_3[0x10] = 0;
  param_2[0x10] = uVar3;
  memcpy(param_2 + 0x11,param_3 + 0x11,0x9c);
  param_2[0x26] = param_3[0x26];
  param_2[0x27] = param_3[0x27];
  param_2[0x28] = param_3[0x28];
  param_2[0x29] = param_3[0x29];
  uVar3 = param_3[0x2a];
  param_3[0x2a] = 0;
  param_2[0x2a] = uVar3;
  param_2[0x2b] = param_3[0x2b];
  param_2[0x2c] = param_3[0x2c];
  param_2[0x2d] = param_3[0x2d];
  uVar3 = param_3[0x2e];
  param_3[0x2e] = 0;
  param_2[0x2e] = uVar3;
  param_2[0x2f] = param_3[0x2f];
  *(undefined1 *)(param_2 + 0x30) = *(undefined1 *)(param_3 + 0x30);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  }
  return;
}


