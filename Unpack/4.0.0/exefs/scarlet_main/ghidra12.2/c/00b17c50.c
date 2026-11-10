/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b17c50; name: FUN_00b17c50
 */


void FUN_00b17c50(int *param_1,byte *param_2,long *param_3)

{
  undefined4 uVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  int local_50 [2];
  int local_48 [2];
  int local_40 [2];
  int local_38 [2];
  int local_18 [2];
  
  lVar4 = param_3[2];
  bVar2 = *(byte *)(*param_3 + lVar4);
  param_3[2] = lVar4 + 1;
  if (((bVar2 == 0x84) || (-1 < (char)bVar2)) || (0xbf < bVar2)) {
    if (bVar2 == 0x84) {
      bVar2 = *(byte *)(*param_3 + lVar4 + 1);
      param_3[2] = lVar4 + 2;
    }
    *param_2 = bVar2;
    bVar2 = *(byte *)(*param_3 + param_3[2]);
    param_3[2] = param_3[2] + 1;
    if ((((bVar2 & 0xfe) == 0x84) || (-1 < (char)bVar2)) || (0xbf < bVar2)) {
      FUN_01e94e08(local_18,bVar2,param_2 + 2,param_3);
      if (((local_18[0] == 0) &&
          (FUN_01e643c8(local_38,param_2 + 4,param_3), local_18[0] = local_38[0], local_38[0] == 0))
         && ((FUN_01e94dc0(local_40,param_2 + 8,param_3), local_18[0] = local_40[0],
             local_40[0] == 0 &&
             ((FUN_01e643c8(local_48,param_2 + 0xc,param_3), local_18[0] = local_48[0],
              local_48[0] == 0 &&
              (FUN_01e643c8(local_50,param_2 + 0x10,param_3), local_18[0] = local_50[0],
              local_50[0] == 0)))))) {
        lVar4 = param_3[2];
        bVar2 = *(byte *)(*param_3 + lVar4);
        param_3[2] = lVar4 + 1;
        if ((bVar2 == 0x84) || ((-1 < (char)bVar2 || (0xbf < bVar2)))) {
          if (bVar2 == 0x84) {
            bVar2 = *(byte *)(*param_3 + lVar4 + 1);
            param_3[2] = lVar4 + 2;
          }
          param_2[0x14] = bVar2;
          lVar4 = param_3[2];
          bVar2 = *(byte *)(*param_3 + lVar4);
          param_3[2] = lVar4 + 1;
          if (((bVar2 == 0x84) || (-1 < (char)bVar2)) || (0xbf < bVar2)) {
            if (bVar2 == 0x84) {
              bVar2 = *(byte *)(*param_3 + lVar4 + 1);
              param_3[2] = lVar4 + 2;
            }
            param_2[0x15] = bVar2;
            lVar4 = param_3[2];
            bVar2 = *(byte *)(*param_3 + lVar4);
            param_3[2] = lVar4 + 1;
            if (((bVar2 == 0x84) || (-1 < (char)bVar2)) || (0xbf < bVar2)) {
              if (bVar2 == 0x84) {
                bVar2 = *(byte *)(*param_3 + lVar4 + 1);
                param_3[2] = lVar4 + 2;
              }
              param_2[0x16] = bVar2;
              lVar4 = param_3[2];
              cVar3 = *(char *)(*param_3 + lVar4);
              param_3[2] = lVar4 + 1;
              if (cVar3 == -0x78) {
                uVar1 = *(undefined4 *)(*param_3 + lVar4 + 1);
                param_3[2] = lVar4 + 5;
                *(undefined4 *)(param_2 + 0x18) = uVar1;
                local_18[0] = 0;
                goto LAB_00b17d00;
              }
            }
          }
        }
        local_18[0] = 1;
      }
      goto LAB_00b17d00;
    }
  }
  local_18[0] = 1;
LAB_00b17d00:
  *param_1 = local_18[0];
  return;
}


