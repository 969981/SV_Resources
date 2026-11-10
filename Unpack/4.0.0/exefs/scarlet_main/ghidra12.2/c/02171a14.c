/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02171a14; name: FUN_02171a14
 */


uint FUN_02171a14(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  FUN_02171b9c();
  param_1 = param_1 + 0x2b4;
  uVar2 = FUN_0131cbf0(L"Herbizarre",param_1);
  if ((((((uVar2 & 1) == 0) && (uVar2 = FUN_0131cbf0(L"Hypnomade",param_1), (uVar2 & 1) == 0)) &&
       (uVar2 = FUN_0131cbf0(&DAT_03d31544,param_1), (uVar2 & 1) == 0)) &&
      (((uVar2 = FUN_0131cbf0(&DAT_03d3178c,param_1), (uVar2 & 1) == 0 &&
        (uVar2 = FUN_0131cbf0(&DAT_03d315f8,param_1), (uVar2 & 1) == 0)) &&
       ((uVar2 = FUN_0131cbf0(L"Hyporoi",param_1), (uVar2 & 1) == 0 &&
        ((uVar2 = FUN_0131cbf0(&DAT_03d316fc,param_1), (uVar2 & 1) == 0 &&
         (uVar2 = FUN_0131cbf0(L"Hippopotas",param_1), (uVar2 & 1) == 0)))))))) &&
     ((uVar2 = FUN_0131cbf0(L"Hippodocus",param_1), (uVar2 & 1) == 0 &&
      (((((uVar2 = FUN_0131cbf0(L"Hexagel",param_1), (uVar2 & 1) == 0 &&
          (uVar2 = FUN_0131cbf0(&DAT_03d31726,param_1), (uVar2 & 1) == 0)) &&
         (uVar2 = FUN_0131cbf0(L"Hexadron",param_1), (uVar2 & 1) == 0)) &&
        ((uVar2 = FUN_0131cbf0(L"Hydragon",param_1), (uVar2 & 1) == 0 &&
         (uVar2 = FUN_0131cbf0(L"Hydragla",param_1), (uVar2 & 1) == 0)))) &&
       (uVar2 = FUN_0131cbf0(L"Hastacuda",param_1), (uVar2 & 1) == 0)))))) {
    uVar2 = FUN_0131cbf0(L"Ouistempo",param_1);
    if ((uVar2 & 1) == 0) {
      uVar1 = FUN_0131cbf0(L"Ouisticram",param_1);
      uVar1 = uVar1 & 1;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}


