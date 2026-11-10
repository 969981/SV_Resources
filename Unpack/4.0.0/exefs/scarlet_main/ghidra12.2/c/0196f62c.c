/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0196f62c; name: FUN_0196f62c
 */


void FUN_0196f62c(long param_1,undefined4 param_2)

{
  uint uVar1;
  undefined1 uVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  ulong uVar9;
  
  uVar4 = FUN_00cf44f4(*(undefined8 *)(param_1 + 0x70));
  uVar5 = FUN_00cf41a8(*(undefined8 *)(param_1 + 0x70));
  uVar6 = FUN_0196f824(uVar4,uVar5,param_2);
  uVar1 = uVar6 & 0xffff;
  uVar7 = FUN_0196f89c(uVar4,uVar5,param_2);
  uVar9 = FUN_0196f860(uVar4,uVar5,param_2);
  uVar8 = FUN_0196f824(uVar4,uVar5,param_2);
  if (uVar1 != (uVar8 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("nextMonsno == pml::personal::PersonalSystem::GetEvolvedDevNo(beforeMonsno, beforeFormno, routeIndex)"
               ,"Evolve",
               "C:/jenkins/workspace/sudachi/nuget/nuget_pokelib_build_s2/pokelib_titan/lib/pokelib/program/src/pokepara/pml_pokemon_core_param.cpp"
               ,0xd7a);
  }
  if (((6 < uVar1 - 0x299) || ((1 << (ulong)(uVar1 - 0x299 & 0x1f) & 99U) == 0)) &&
     (1 < uVar1 - 0x19d)) {
    uVar5 = uVar7;
  }
  FUN_0196fc78(param_1,uVar6,uVar5);
  uVar3 = FUN_0113b8a0(*(undefined8 *)(param_1 + 0x70));
  if (0x136 < uVar3) {
    uVar5 = FUN_00cf44f4(*(undefined8 *)(param_1 + 0x70));
    uVar4 = FUN_00cf41a8(*(undefined8 *)(param_1 + 0x70));
    uVar7 = FUN_00e99784(param_1);
    uVar3 = FUN_0143b78c(uVar5,uVar4,uVar7);
  }
  if (((uVar6 & 0xffff) == 0x305) && (uVar3 == 0xe1)) {
    FUN_00e974e0(*(undefined8 *)(param_1 + 0x70));
    uVar2 = FUN_021f77f4();
    FUN_0143b218(param_1,uVar2,0);
  }
  else if ((uVar6 & 0xffff) == 0x365) {
    FUN_00e974e0(*(undefined8 *)(param_1 + 0x70));
    uVar5 = FUN_021f78bc();
    FUN_01e2afa8(param_1,uVar5);
  }
  if ((((uint)uVar9 & 0xffff) < 0x2e) && ((1L << (uVar9 & 0x3f) & 0x200000180040U) != 0)) {
    FUN_00ef0af0(*(undefined8 *)(param_1 + 0x70),0);
    return;
  }
  return;
}


